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
# 2. Ask for Omniverse credentials if not exported
# ─────────────────────────────────────────────────────────────
export ACCEPT_EULA=${ACCEPT_EULA:-Y}
export PRIVACY_CONSENT=${PRIVACY_CONSENT:-Y}
export OMNI_SERVER=${OMNI_SERVER:-omniverse://localhost/NVIDIA/Assets/Isaac/4.5}

if [[ -z "${OMNI_USER:-}" ]]; then read -rp "Omniverse user: "  OMNI_USER; fi
if [[ -z "${OMNI_PASS:-}" ]]; then read -srp "Omniverse pass: " OMNI_PASS; echo; fi
export OMNI_USER OMNI_PASS

# ─────────────────────────────────────────────────────────────
# 3. Allow docker to access the host X-server
# ─────────────────────────────────────────────────────────────
xhost +local:docker

# ─────────────────────────────────────────────────────────────
# 4. Run the container
# ─────────────────────────────────────────────────────────────
docker run --rm -it \
  --name hunavsim_isaac --entrypoint bash \
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