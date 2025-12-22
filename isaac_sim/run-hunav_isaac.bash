#!/usr/bin/env bash

# ─────────────────────────────────────────────────────────────
# 0. User-tunable variables
# ─────────────────────────────────────────────────────────────
IMAGE_NAME="hunav_isaac_sim"            

ROS_DOMAIN_ID=0
RMW_IMPL=rmw_cyclonedds_cpp

# ─────────────────────────────────────────────────────────────
# 1. Paths
# ─────────────────────────────────────────────────────────────
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
HOST_WS="${SCRIPT_DIR}/hunav_isaac_ws"                                 
XSOCK="/tmp/.X11-unix"
XAUTH="$HOME/.Xauthority"

# ─────────────────────────────────────────────────────────────
# 2. Securely retrieve Omniverse credentials (Keyring + fallback)
# ─────────────────────────────────────────────────────────────
export ACCEPT_EULA=${ACCEPT_EULA:-Y}
export PRIVACY_CONSENT=${PRIVACY_CONSENT:-Y}
export OMNI_SERVER=${OMNI_SERVER:-omniverse://localhost/NVIDIA/Assets/Isaac/4.5}

CRED_FILE="${SCRIPT_DIR}/omniverse_credentials"
USE_KEYRING=false

# Parse --reset-credentials if passed
for arg in "$@"; do
    if [[ "$arg" == "--reset-credentials" ]]; then
        echo -e "\n🧹 Clearing saved Omniverse credentials..."
        if command -v secret-tool &> /dev/null; then
            secret-tool clear service omniverse_user || true
            secret-tool clear service omniverse_pass || true
        fi
        rm -f "$CRED_FILE"
        echo -e "Credentials cleared. They will be requested again now.\n"
        unset OMNI_USER OMNI_PASS
    fi
done

# Try to ensure secret-tool is available
if ! command -v secret-tool &> /dev/null; then
    echo "'secret-tool' not found. Trying to install libsecret-tools..."
    if command -v sudo &> /dev/null; then
        sudo apt update && sudo apt install -y libsecret-tools
    else
        echo "⚠️  Could not install secret-tool (sudo not available). Will use local credential file."
    fi
fi

# Try keyring access
if command -v secret-tool &> /dev/null; then
    USE_KEYRING=true
fi

if $USE_KEYRING; then
    OMNI_USER=$(secret-tool lookup service omniverse_user)
    OMNI_PASS=$(secret-tool lookup service omniverse_pass)

    CRED_STORED=false

    if [[ -z "$OMNI_USER" ]]; then
        echo -e "\nPlease enter your Omniverse credentials:\n"
        read -rp "Omniverse user: " OMNI_USER
        echo -n "$OMNI_USER" | secret-tool store --label="Omniverse Username" service omniverse_user
        CRED_STORED=true
    fi

    if [[ -z "$OMNI_PASS" ]]; then
        read -srp "Omniverse pass: " OMNI_PASS; echo
        echo -n "$OMNI_PASS" | secret-tool store --label="Omniverse Password" service omniverse_pass
        CRED_STORED=true
    fi

    if $CRED_STORED; then
        echo -e "\n🔐 Omniverse credentials securely stored in system keyring.\n"
    fi

else
    # Fallback to local file
    if [[ -f "$CRED_FILE" ]]; then
        source "$CRED_FILE"
    fi

    if [[ -z "${OMNI_USER:-}" ]]; then
        read -rp "Omniverse user: " OMNI_USER
        echo "# Auto-generated credentials file. Do not commit." > "$CRED_FILE"
        echo "OMNI_USER=\"$OMNI_USER\"" >> "$CRED_FILE"
    fi

    if [[ -z "${OMNI_PASS:-}" ]]; then
        read -srp "Omniverse pass: " OMNI_PASS; echo
        if ! grep -q OMNI_PASS "$CRED_FILE"; then
            echo "OMNI_PASS=\"$OMNI_PASS\"" >> "$CRED_FILE"
        fi
    fi

    chmod 600 "$CRED_FILE"
fi

export OMNI_USER OMNI_PASS

# ─────────────────────────────────────────────────────────────
# 3. Allow docker to access the host X-server
# ─────────────────────────────────────────────────────────────
xhost +local:docker

# ─────────────────────────────────────────────────────────────
# 4. Run the container
# ─────────────────────────────────────────────────────────────
docker run --rm -it \
  --name hunav_isaac_sim \
  --gpus all --runtime=nvidia --privileged --network host \
  -e DISPLAY="$DISPLAY"         -e QT_X11_NO_MITSHM=1 \
  -e ROS_DOMAIN_ID="${ROS_DOMAIN_ID}" -e RMW_IMPLEMENTATION="${RMW_IMPL}" \
  -e ACCEPT_EULA                      -e PRIVACY_CONSENT \
  -e OMNI_SERVER -e OMNI_USER -e OMNI_PASS \
  -v "${XSOCK}:${XSOCK}:rw"           -v "${XAUTH}:/root/.Xauthority:ro" \
  -v "${SCRIPT_DIR}/hunav_isaac_ws/isaac-sim/cache/kit:/isaac-sim/kit/cache:rw" \
  -v "${SCRIPT_DIR}/hunav_isaac_ws/isaac-sim/cache/ov:/root/.cache/ov:rw" \
  -v "${SCRIPT_DIR}/hunav_isaac_ws/isaac-sim/cache/pip:/root/.cache/pip:rw" \
  -v "${SCRIPT_DIR}/hunav_isaac_ws/isaac-sim/cache/glcache:/root/.cache/nvidia/GLCache:rw" \
  -v "${SCRIPT_DIR}/hunav_isaac_ws/isaac-sim/cache/computecache:/root/.nv/ComputeCache:rw" \
  -v "${SCRIPT_DIR}/hunav_isaac_ws/isaac-sim/cache/asset_browser:/isaac-sim/exts/isaacsim.asset.browser/cache:rw" \
  -v "${SCRIPT_DIR}/hunav_isaac_ws/isaac-sim/logs:/root/.nvidia-omniverse/logs:rw" \
  -v "${SCRIPT_DIR}/hunav_isaac_ws/isaac-sim/data:/root/.local/share/ov/data:rw" \
  -v "${SCRIPT_DIR}/hunav_isaac_ws/isaac-sim/pkg:/root/.local/share/ov/pkg:rw" \
  -v "${SCRIPT_DIR}/hunav_isaac_ws/isaac-sim/documents:/root/Documents:rw" \
  --mount type=bind,src="${HOST_WS}",dst=/workspace/hunav_isaac_ws \
  "${IMAGE_NAME}"