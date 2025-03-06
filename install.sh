#!/bin/bash

echo "Installing HuNavSim docker system..."

# clean the docker cache
docker buildx prune
# build the docker image
echo "Building the docker image..."
docker build -t pmb2_hunavsim -f Dockerfile.pmb2_hunavsim2 .


# Folder names
FOLDER_NAME="hunavsim_ws"
FOLDER2_NAME="src"


echo "Creating share workspace..."
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
REPO1_URL="https://github.com/robotics-upo/hunav_sim.git"
REPO2_URL="https://github.com/robotics-upo/hunav_gazebo_wrapper.git"
git clone "$REPO1_URL" 
echo "Repository '$REPO1_URL' has been cloned."
git clone "$REPO2_URL" 
echo "Repository '$REPO2_URL' has been cloned."

echo "_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-__-⁻-_-⁻-_-⁻-_-⁻-_"
echo "HuNavSim docker system has been installed successfully."
echo "_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-__-⁻-_-⁻-_-⁻-_-⁻-_"
echo "To run the docker image, execute: "
echo " ./run_container-pmb2_hunavsim2.bash"


