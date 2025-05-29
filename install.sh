#!/bin/bash

echo -e "\e[36m_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-__-⁻-_-⁻-_-⁻-_-⁻-_\e[0m"
echo -e "\e[36m            HuNavSim Docker System\e[0m"
echo -e "\e[36m_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-__-⁻-_-⁻-_-⁻-_-⁻-_\e[0m"
echo -e "\e[33mPlease select wich HuNavSim system you want to install:\e[0m"
echo -e "\e[33m" # Start yellow for the rest

echo -e "1. HuNavSim + Gazebo Classic 11 + ROS 2 Humble + PAL PMB2 robot"
echo -e "2. HuNavSim + Gazebo Fortress   + ROS 2 Humble"
echo -e "3. HuNavSim + Isaac Sim         + ROS 2 Humble + Carter robot"
echo -e "4. HuNavSim + Webots            + ROS 2 Humble + Tiago robot"
echo -e "5. HuNavSim + O3DE              + ROS 2 Humble + robot? (UMM.. WE ARE STILL THINKING ABOUT IT!)"
echo -e "\e[0m"
read -p "Please select an option (1-5): " option
# Check if the input is a number between 1 and 4
if ! [[ "$option" =~ ^[1-5]$ ]]; then
    echo -e "\e[31mInvalid option. Please select a number between 1 and 4.\e[0m"
    exit 1
fi

# variables
LOCAL_DIR="gazebo_classic"
WS_NAME="hunav_gz_classic_ws"
SRC_NAME="src"
CONTAINER_NAME="pmb2_hunavsim"
DOCKERFILE_NAME="Dockerfile.hunav_gz_classic11_pmb2"
REPO1_URL="https://github.com/robotics-upo/hunav_sim.git"
REPO2_URL="https://github.com/robotics-upo/hunav_gazebo_wrapper.git"
RUN_SCRIPT_NAME="run-hunav_gz_classic11_pmb2.bash"

# evaluate the option
#if [ "$option" -eq 1 ]; then
case $option in
    # OPTION 1
    # HuNavSim + Gazebo Classic 11 + ROS 2 Humble + PAL PMB2 robot
    1)
        echo "You selected option 1: HuNavSim + Gazebo Classic 11 + ROS 2 Humble + PAL PMB2 robot"
        # Move to the directory where the Gazebo Classic scripts are located
        cd $LOCAL_DIR
        # check if docker is installed
        if ! command -v docker &> /dev/null; then
            echo -e "\e[31mDocker is not installed. Please install Docker first.\e[0m"
            exit 1
        fi
        ;;


    # OPTION 2
    # HuNavSim + Gazebo Fortress   + ROS 2 Humble
    2) 
        echo "You selected option 2: HuNavSim + Gazebo Fortress   + ROS 2 Humble"
        # Move to the directory where the Gazebo Classic scripts are located
        LOCAL_DIR="gazebo_fortress"
        cd $LOCAL_DIR
        # check if docker is installed
        if ! command -v docker &> /dev/null; then
            echo -e "\e[31mDocker is not installed. Please install Docker first.\e[0m"
            exit 1
        fi
        WS_NAME="hunav_gz_fortress_ws"
        CONTAINER_NAME="gz_fortress_hunavsim"
        DOCKERFILE_NAME="Dockerfile.hunav_gz_fortress"
        REPO2_URL="https://github.com/robotics-upo/hunav_gazebo_fortress_wrapper.git"
        RUN_SCRIPT_NAME="run-hunav_gz_fortress.bash"
        ;;

    3)
        # HuNavSim + Isaac Sim         + ROS 2 Humble + Carter robot 
        echo "You selected option 3: HuNavSim + Isaac Sim + ROS 2 Humble + Carter robot"
        # Move to the directory where the Gazebo Classic scripts are located
        LOCAL_DIR="isaac_sim"
        cd $LOCAL_DIR
        # check if docker is installed
        if ! command -v docker &> /dev/null; then
            echo -e "\e[31mDocker is not installed. Please install Docker first.\e[0m"
            exit 1
        fi
        WS_NAME="hunav_isaac_ws"                 
        CONTAINER_NAME="hunav_isaac_sim"
        DOCKERFILE_NAME="Dockerfile.hunav_isaac"     
        RUN_SCRIPT_NAME="run-hunav_isaac.bash"      
        REPO2_URL="https://github.com/robotics-upo/Hunav_isaac_wrapper.git"
        ;;
    4)
        # HuNavSim + Webots            + ROS 2 Humble + robot? (AVAILABLE SOON!)
        echo "You selected option 4: HuNavSim + Webots            + ROS 2 Humble + Tiago Robot"
        LOCAL_DIR="webots"
        cd $LOCAL_DIR
        # check if docker is installed
        if ! command -v docker &> /dev/null; then
            echo -e "\e[31mDocker is not installed. Please install Docker first.\e[0m"
            exit 1
        fi
        WS_NAME="hunav_webots_ws"
        CONTAINER_NAME="hunav_webots_sim"
        DOCKERFILE_NAME="Dockerfile.hunav_webots"
        REPO2_URL="https://github.com/robotics-upo/hunav_webots_wrapper.git"
        RUN_SCRIPT_NAME="run-hunav_webots.bash"
        ;;
    5)
        # HuNavSim + O3DE              + ROS 2 Humble + robot? (UMM.. WE ARE STILL THINKING ABOUT IT!)
        echo "You selected option 5: HuNavSim + O3DE              + ROS 2 Humble + robot? (UMM.. WE ARE STILL THINKING ABOUT IT!)"
        # run the installation script for HuNavSim + O3DE              + ROS 2 Humble + robot? (UMM.. WE ARE STILL THINKING ABOUT IT!)
        # check if docker is installed
        if ! command -v docker &> /dev/null; then
            echo -e "\e[31mDocker is not installed. Please install Docker first.\e[0m"
            exit 1
        fi
        echo "TO BE DONE!!!"
        exit 1
        ;;

    *)
        echo "Option $option is not available yet."
        exit 1
        ;;
esac


# SETUP EVERYTHING
echo -e "\e[33mInstalling HuNavSim docker system...\e[0m"
# clean the docker cache
#docker buildx prune
# build the docker image
echo -e "\e[33m============================\e[0m"
echo -e "\e[33mBuilding the docker image...\e[0m"
echo -e "\e[33m============================\e[0m"
docker build -t "$CONTAINER_NAME" -f "$DOCKERFILE_NAME" .
echo -e "\e[33m============================\e[0m"
echo -e "\e[33mCreating share workspace '$WS_NAME'...\e[0m"
echo -e "\e[33m============================\e[0m"
# check if already there
if [ -d "$WS_NAME" ]; then
    echo "Folder '$WS_NAME' already exists."
else
    # Create the folder
    mkdir "$WS_NAME"
    echo "Folder '$WS_NAME' created successfully."
fi

# Enter the directory
cd $WS_NAME
# check if already there
if [ -d "$SRC_NAME" ]; then
    echo "Folder '$SRC_NAME' already exists."
else
    # Create the folder
    mkdir "$SRC_NAME"
    echo "Folder '$SRC_NAME' created successfully."
fi

cd $SRC_NAME
# clone the HuNavSim repositories
echo -e "\e[33m================================================\e[0m"
echo -e "\e[33mCloning HuNav software in the share workspace...\e[0m"
echo -e "\e[33m================================================\e[0m"
git clone "$REPO1_URL" 
echo "Repository '$REPO1_URL' has been cloned."
git clone "$REPO2_URL" 
echo "Repository '$REPO2_URL' has been cloned."

echo -e "\e[36m_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-__-⁻-_-⁻-_-⁻-_-⁻-_\e[0m"
echo -e "\e[36mHuNavSim docker system has been installed successfully.\e[0m"
echo -e "\e[36m_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-__-⁻-_-⁻-_-⁻-_-⁻-_\e[0m"
cd ../..
echo -e "\e[33mTo run the docker image, execute: \e[0m"
echo -e "\e[33mcd $LOCAL_DIR\e[0m"
echo -e "\e[33m ./$RUN_SCRIPT_NAME\e[0m"
echo -e "\e[33m_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-__-⁻-_-⁻-_-⁻-_-⁻-_\e[0m"










