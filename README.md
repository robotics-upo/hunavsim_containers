# hunavsim_containers

**This is a work in progress version**

This is a package with the files and tools required to build and run Docker containers with the HuNavSim and different Robotics simulators under ROS 2. The available options are:

| Option | Simulator | Robot(s) | Notes |
|--------|-----------|----------|-------|
| **1** | **Gazebo Classic 11** | [PMB2](https://github.com/pal-robotics/pmb2_simulation/tree/humble-devel) (PAL Robotics) | Includes ROS 2 navigation stack. Optional [**Gazebo World Generator**](https://github.com/robotics-upo/gazebo_world_generator) package that uses LLMs to create simulation worlds from plain English descriptions. |
| **2** | **Gazebo Fortress** | ❌ None yet | No robot available at the moment. Work in progress. |
| **3** | **Isaac Sim** | Multiple robots available | Allows selection between different robots including Carter. |
| **4** | **Webots** | [TIAGo Lite](https://github.com/cyberbotics/webots_ros2/wiki/Example-TIAGo) (PAL Robotics) | Includes the TIAGo robot platform. | 

The containers contains all the required packages to run different simulations of the HuNavSim in the chosen Robotics Simulator. Moreover, the HuNavSim software is installed in a shared directory with the host system, so the user can modify or create new simulations and store them.   

## Dependencies

| Requirement | Notes / Links |
|-------------|---------------|
| **Docker**  | Install Docker Engine following the official guide → <https://docs.docker.com/desktop/setup/install/linux/> |
| **Git**     | Needed to clone the HuNavSim and wrappers repositories |
| **Nvidia container toolkit** | https://docs.nvidia.com/datacenter/cloud-native/container-toolkit/latest/install-guide.html |
| **Isaac Sim container prerequisites** <br>(**only for option 3 – Isaac Sim**) | Before running the *Isaac Sim* container you **must** complete the “Container Setup” steps in the official Isaac Sim docs (NVIDIA driver and Container Toolkit).<br>Guide → <https://docs.isaacsim.omniverse.nvidia.com/latest/installation/install_container.html#container-setup> |

## Installation

Once you have installed docker, you can install the system by executing the bash script *install.sh*.
First give execution permission to the script from a terminal:

```sh
chmod +x install.sh
```

Then you can execute it:

```sh
./install.sh
```

This script will ask you about the option that you want to install, and will show the installation progress. 
**The HuNavSim software and the indicated wrapper, will be installed in a shared workspace shared with the docker container, located inside the indicated simulator directory, so you can modify and create your own environments with persistance.**   

## Execution

After system installation, the installation program will show on the screen the name of the script that is required to run the system. Before execute it, we must check the execution permissions (only required the first time).

```sh
chmod +x given_script_name.bash
```

Execute the indicated script:

```sh
./given_script_name.bash
```

### Execution Options

The previous script will run the docker container and will compile the current workspace. Moreover it will show a menu with the possible options. For example:

#### (1) Gazebo Classic, (2) Gazebo Fortress and (4) Webots Menu

These simulators will show stored scenarios that can be executed (.yaml files in the *scenarios* directory of the running wrapper) along with other options:

```sh
========= HuNavSim Docker Menu =========
  1) Run environment agents_cafe.yaml
  2) Run environment agents_house.yaml
  3) Run environment agents_warehouse.yaml
  4) Create a new environment with RViz
  5) Open a bash shell
  6) Exit
========================================
Select an option (number): 
```

With option 4, the RViz with the HuNavSim panel will be opened so the user can create new scenarios (**ONGOING WORK**).

The user can create/modify the simulations throught the shared workspace. 

NOTE FOR GAZEBO CLASSIC: SOMETIMES, GAZEBO TAKES A LONG TIME TO LAUNCH THE FIRST TIME LEADING TO ERRORS IN THE SYSTEM. IN THAT CASE, STOP THE SYSTEM (CRTL+C), THE MENU WILL SHOW UP AGAIN, AND RE-RUN THE ENVIRONMENT AGAIN. IT SHOULD WORK THE SECOND TIME.

#### (3) Isaac Sim Menu

Isaac Sim now also provides an interactive menu system similar to the other simulators:

```sh
========= HuNavSim Isaac Docker Menu =========
  1) Launch HuNav Isaac Interactive Launcher
  2) Quick Launch: Warehouse scenario (warehouse_agents.yaml)
  3) Quick Launch: Hospital scenario (hospital_agents.yaml)
  4) Quick Launch: Office scenario (office_agents.yaml)
  5) Create a new scenario with RViz
  6) Open a bash shell
  7) Exit container
===============================================
Select an option (number):
```

- **Option 1**: Launches the full interactive launcher with advanced configuration options.
- **Options 2-4**: Quick launch predefined scenarios with the carter_ROS robot in a new terminator window.
- **Option 5**: Create and configure new scenarios using RViz with the HuNavSim panel.
- **Option 6**: Opens a new terminal window using terminator.

### Additional Isaac Sim Information

#### Omniverse Login (Required)

When you run the Isaac Sim container for the first time, you'll be prompted for **Omniverse credentials**.

To connect to the **Nucleus server**, which allows **Isaac Sim** to download and cache asset packs locally, you must log in with your **Omniverse username and password**.

If you don’t have an account, you can register here:\
   [https://developer.nvidia.com/login](https://developer.nvidia.com/login)

Your credentials are securely stored using your system’s **keyring** (`libsecret` via `secret-tool`) after first use.\
You won’t be prompted again in future runs unless you manually reset them.

#### Resetting Credentials (Optional)

If you entered incorrect credentials or want to re-authenticate, you can run:

```bash
./run-hunav_isaac.bash --reset-credentials
```

This will:

- Clear the stored credentials from the system keyring.
- Prompt you again for your username and password.
- Immediately launch the container afterward.

> [!NOTE]
> The first launch may take **several minutes** while Isaac Sim populates its caches. Subsequent launches are significantly faster thanks to persistent volumes.

#### Using ROS 2 Nav2 with Carter Robot

The `carter_ROS` robot supports autonomous navigation using the **ROS 2 Nav2** stack. 

**To launch Nav2 navigation:**

1. First, start a simulation using the menu (options 1-4)
2. Open a new terminal with option 6 or use an existing terminal
3. Run the following commands:

```bash
cd /workspace/hunav_isaac_ws/src/Hunav_isaac_wrapper/src
ros2 launch carter_navigation carter_navigation.launch.py \
  params_file:="config/navigation_params/carter_navigation_params.yaml" \
  map:="scenarios/occupancy_maps/warehouse.yaml"
```

> [!NOTE] 
> Change the `map` parameter to match your scenario:
> - `warehouse.yaml` for warehouse scenario
> - `hospital.yaml` for hospital scenario  
> - `office.yaml` for office scenario

This will launch the Nav2 stack with the appropriate map and navigation parameters for your selected environment.
