# docker_hunavsim_pmb2

**This is a work in progress version**

This is a package with the files and tools required to build and run a docker container with the HuNavSim, the Gazebo Simulator and [PMB2 Robot (ROS 2)](https://github.com/pal-robotics/pmb2_simulation/tree/humble-devel) robot of PAL robotics.
The container contains all the required packages to run different simulations in Gazebo of the HuNavSim and the Pmb2 robots. The HuNavSim software will be installed in a shared directory with the host system, so the user can modify or create new simulations and store them.   


# Dependencies

* Docker is required. Please follow the steps here to install it: https://docs.docker.com/desktop/setup/install/linux/
* git 


# Installation

To build the docker image and create the shared workspace, you must execute the bash script *install.sh*.
First give execution permission to the script from a terminal:

```sh
chmod +x install.sh
```

Then you can execute it:

```sh
./install.sh
```

A new workspace, called *hunavsim_ws*, should have been created with the HuNavSim software.   


# Execution

After the image has been build, you can run a container by executing the bash file:

```sh
chmod +x run_container-pmb2_hunavsim2.bash
./run_container-pmb2_hunavsim2.bash
```

Once you are inside the container, move the shared workspace and compile it before running any simulation.

```sh
cd ../hunavsim_ws
```

```sh
colcon build --symlink-install
source install/setup.bash
```

Then, you have three different example scenarios to launch the Pmb2 robot (with autonomous navigation) with the HuNavSim agents:

1. Café scenario: ```ros2 launch hunav_gazebo_wrapper pmb2_cafe.launch.py```
2. House environment: ```ros2 launch hunav_gazebo_wrapper small_house.launch.py```
3. Small warehouse scenario: ```ros2 launch hunav_gazebo_wrapper small_warehouse.launch.py ```

The user can create/modify the simulations throught the shared workspace *hunavsim_ws*. 


NOTE1: SOMETIMES, GAZEBO TAKES A LONG TIME TO LAUNCH THE FIRST TIME LEADING TO ERRORS IN THE SYSTEM. IN THAT CASE, RE-RUN THE ROS LAUNCH FILE AGAIN. IT SHOULD WORK THE SECOND TIME.

NOTE2: SOMETIMES, AFTER SHUTTING DOWN THE SIMULATION, GAZEBO DOES NOT CLOSE PROPERLY AND IT BECOMES A ZOMBIE PROCESS. PLEASE CHECK WITH TOOLS LIKE *top* and *htop* WHETHER THE PROCESS IS STILL ALIVE AND KILL IT IF NECESSARY.  



