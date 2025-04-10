#!/bin/bash

echo "_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-__-⁻-_-⁻-_-⁻-_-⁻-_"
echo "            HuNavSim Docker System"
echo "_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-__-⁻-_-⁻-_-⁻-_-⁻-_"
echo "Please select wich HuNavSim system you want to install:"
echo ""
echo "1. HuNavSim + Gazebo Classic 11 + ROS 2 Humble + PAL PMB2 robot"
echo "2. HuNavSim + Gazebo Fortress   + ROS 2 Humble"
echo "3. HuNavSim + Isaac Sim         + ROS 2 Humble + robot? (AVAILABLE SOON!)"
echo "4. HuNavSim + Webots            + ROS 2 Humble + robot? (AVAILABLE SOON!)"
echo "5. HuNavSim + O3DE              + ROS 2 Humble + robot? (UMM.. WE ARE STILL THINKING ABOUT IT!)"
echo ""
read -p "Please select an option (1-5): " option
# Check if the input is a number between 1 and 4
if ! [[ "$option" =~ ^[1-5]$ ]]; then
    echo "Invalid option. Please select a number between 1 and 4."
    exit 1
fi

# variables
FOLDER_NAME="hunav_gz_classic_ws"
FOLDER2_NAME="src"
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
        # run the installation script for HuNavSim + Gazebo Classic 11 + ROS 2 Humble + PAL PMB2 robot
        # run the installation script for HuNavSim + Gazebo Classic 11 + ROS 2 Humble + PAL PMB2 robot
        # check if docker is installed
        if ! command -v docker &> /dev/null; then
            echo "Docker is not installed. Please install Docker first."
            exit 1
        fi
        ;;


    # OPTION 2
    # HuNavSim + Gazebo Fortress   + ROS 2 Humble
    2) 
        echo "You selected option 2: HuNavSim + Gazebo Fortress   + ROS 2 Humble"
        # run the installation script for HuNavSim + Gazebo Fortress   + ROS 2 Humble
        # check if docker is installed
        if ! command -v docker &> /dev/null; then
            echo "Docker is not installed. Please install Docker first."
            exit 1
        fi
        FOLDER_NAME="hunav_gz_fortress_ws"
        CONTAINER_NAME="gz_fortress_hunavsim"
        DOCKERFILE_NAME="Dockerfile.hunav_gz_fortress"
        REPO2_URL="https://github.com/robotics-upo/hunav_gazebo_fortress_wrapper.git"
        RUN_SCRIPT_NAME="run-hunav_gz_fortress.bash"
        ;;

    3)
        # HuNavSim + Isaac Sim         + ROS 2 Humble + robot? (AVAILABLE SOON!)
        echo "You selected option 3: HuNavSim + Isaac Sim         + ROS 2 Humble + robot? (AVAILABLE SOON!)"
        # run the installation script for HuNavSim + Isaac Sim         + ROS 2 Humble + robot? (AVAILABLE SOON!)
        # check if docker is installed
        if ! command -v docker &> /dev/null; then
            echo "Docker is not installed. Please install Docker first."
            exit 1
        fi
        echo "TO BE DONE!!!"
        exit 1
        ;;
    4)
        # HuNavSim + Webots            + ROS 2 Humble + robot? (AVAILABLE SOON!)
        echo "You selected option 4: HuNavSim + Webots            + ROS 2 Humble + robot? (AVAILABLE SOON!)"
        # run the installation script for HuNavSim + Webots            + ROS 2 Humble + robot? (AVAILABLE SOON!)
        # check if docker is installed
        if ! command -v docker &> /dev/null; then
            echo "Docker is not installed. Please install Docker first."
            exit 1
        fi
        echo "TO BE DONE!!!"
        exit 1
        ;;
    5)
        # HuNavSim + O3DE              + ROS 2 Humble + robot? (UMM.. WE ARE STILL THINKING ABOUT IT!)
        echo "You selected option 5: HuNavSim + O3DE              + ROS 2 Humble + robot? (UMM.. WE ARE STILL THINKING ABOUT IT!)"
        # run the installation script for HuNavSim + O3DE              + ROS 2 Humble + robot? (UMM.. WE ARE STILL THINKING ABOUT IT!)
        # check if docker is installed
        if ! command -v docker &> /dev/null; then
            echo "Docker is not installed. Please install Docker first."
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
echo "Installing HuNavSim docker system..."
# clean the docker cache
docker buildx prune
# build the docker image
echo "============================"
echo "Building the docker image..."
echo "============================"
docker build -t "$CONTAINER_NAME" -f "$DOCKERFILE_NAME" .
echo "============================"
echo "Creating share workspace '$FOLDER_NAME'..."
echo "============================"
# check if already there
if [ -d "$FOLDER_NAME" ]; then
    echo "Folder '$FOLDER_NAME' already exists."
else
    # Create the folder
    mkdir "$FOLDER_NAME"
    echo "Folder '$FOLDER_NAME' created successfully."
fi

# Enter the directory
cd $FOLDER_NAME
# check if already there
if [ -d "$FOLDER2_NAME" ]; then
    echo "Folder '$FOLDER2_NAME' already exists."
else
    # Create the folder
    mkdir "$FOLDER2_NAME"
    echo "Folder '$FOLDER2_NAME' created successfully."
fi

cd $FOLDER2_NAME
# clone the HuNavSim repositories
echo "================================================"
echo "Cloning HuNav software in the share workspace..."
echo "================================================"
git clone "$REPO1_URL" 
echo "Repository '$REPO1_URL' has been cloned."
git clone "$REPO2_URL" 
echo "Repository '$REPO2_URL' has been cloned."

echo "_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-__-⁻-_-⁻-_-⁻-_-⁻-_"
echo "HuNavSim docker system has been installed successfully."
echo "_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-__-⁻-_-⁻-_-⁻-_-⁻-_"
echo "To run the docker image, execute: "
echo " ./'$RUN_SCRIPT_NAME'"
echo "_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-__-⁻-_-⁻-_-⁻-_-⁻-_"










