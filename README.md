# hunavsim_containers

**This is a work in progress version**

This is a package with the files and tools required to build and run Docker containers with the HuNavSim and different Robotics simulators. Te available options are:

1. HuNavSim + Gazebo Classic 11 + ROS 2 Humble + PAL PMB2 robot
2. HuNavSim + Gazebo Fortress   + ROS 2 Humble
3. HuNavSim + Isaac Sim         + ROS 2 Humble + robot? **AVAILABLE SOON!**
4. HuNavSim + Webots            + ROS 2 Humble + robot? **AVAILABLE SOON!**"

Option 1 includes the [PMB2 Robot (ROS 2)](https://github.com/pal-robotics/pmb2_simulation/tree/humble-devel) robot of PAL robotics and the ROS 2 navigation system up.
The other options includes examples of the HuNavSim without any robot included in the simulations for the moment. 

The containers contains all the required packages to run different simulations of the HuNavSim in the chosen Robotics Simulator. Moreover, the HuNavSim software is installed in a shared directory with the host system, so the user can modify or create new simulations and store them.   


# Dependencies

* Docker is required. Please follow the steps here to install it: https://docs.docker.com/desktop/setup/install/linux/
* git 


# Installation

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
The HuNavSim software, will be installed in a shared workspace, so you can modify and create your own environments.   


# Execution

After system installation, the installation program will show on the screen the name of the script that is required to run the system. Before execute it, we must check the execution permissions (only required the first time).

```sh
chmod +x given_script_name.bash
```

## Execution Option 1 (Gazebo Classic)

Execute the indicated script:

```sh
./run-hunav_gz_classic11_pmb2.bash
```

Once you are inside the container terminal, move the shared workspace and compile it before running any simulation.

```sh
cd ../hunav_gz_classic_ws
```

```sh
colcon build --symlink-install
source install/setup.bash
```

Then, you have three different example scenarios to launch the Pmb2 robot (with autonomous navigation) and the HuNavSim agents:

1. Café scenario: ```ros2 launch hunav_gazebo_wrapper pmb2_cafe.launch.py```
2. House environment: ```ros2 launch hunav_gazebo_wrapper small_house.launch.py``` 
3. Small warehouse scenario: ```ros2 launch hunav_gazebo_wrapper small_warehouse.launch.py ```

The user can create/modify the simulations throught the shared workspace *hunav_gz_classic_ws*. 

NOTE1: SOMETIMES, GAZEBO TAKES A LONG TIME TO LAUNCH THE FIRST TIME LEADING TO ERRORS IN THE SYSTEM. IN THAT CASE, RE-RUN THE ROS LAUNCH FILE AGAIN. IT SHOULD WORK THE SECOND TIME.

NOTE2: SOMETIMES, AFTER SHUTTING DOWN THE SIMULATION, GAZEBO DOES NOT CLOSE PROPERLY AND IT BECOMES A ZOMBIE PROCESS. PLEASE CHECK WITH TOOLS LIKE *top* and *htop* WHETHER THE PROCESS IS STILL ALIVE AND KILL IT IF NECESSARY.  


## Execution Option 2 (Gazebo Fortress)

Execute the indicated script:

```sh
./run-hunav_gz_fortress.bash
```

Once you are inside the container terminal, move the shared workspace and compile it before running any simulation.

```sh
cd ../hunav_gz_fortress_ws
```

```sh
colcon build --symlink-install
source install/setup.bash
```

Then, you can launch an example of HuNavSim agents moving in the cafe environment. No navigation robot is included in this example. The person stand still in the center is acting as the robot.  

```ros2 launch hunav_gazebo_fortress_wrapper cafe_fortress_test.launch.py```

NOTE: ONGOING WORK. WE WILL TRY TO EXTEND THE NUMBER OF EXAMPLE ESCENARIOS AND TO INCLUDE ROBOTS. 


## Execution Option 3 (Isaac Sim)

TO BE FILLED!!!

