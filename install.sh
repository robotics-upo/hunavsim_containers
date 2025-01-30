#!/bin/bash

echo "Installing HuNavSim docker system..."

# clean the docker cache
docker buildx prune
# build the docker image
echo "Building the docker image..."
docker build -t pmb2_hunavsim -f Dockerfile.pmb2_hunavsim2 .


# Nombre de la carpeta
FOLDER_NAME="hunavsim_ws"
FOLDER2_NAME="src"


echo "Creating share workspace..."
# Verifica si la carpeta ya existe
if [ -d "$FOLDER_NAME" ]; then
    echo "La carpeta '$FOLDER_NAME' ya existe."
else
    # Crea la carpeta
    mkdir "$FOLDER_NAME"
    echo "Carpeta '$FOLDER_NAME' creada exitosamente."
fi

# Enter the directory
cd $FOLDER_NAME
# Verifica si la carpeta ya existe
if [ -d "$FOLDER2_NAME" ]; then
    echo "La carpeta '$FOLDER2_NAME' ya existe."
else
    # Crea la carpeta
    mkdir "$FOLDER2_NAME"
    echo "Carpeta '$FOLDER2_NAME' creada exitosamente."
fi

cd $FOLDER2_NAME
# clone the HuNavSim repositories
REPO1_URL="https://github.com/robotics-upo/hunav_sim.git"
REPO2_URL="https://github.com/robotics-upo/hunav_gazebo_wrapper.git"
git clone "$REPO1_URL" 
echo "Repository '$REPO1_URL' has been cloned."
git clone "$REPO2_URL" 
echo "Repository '$REPO2_URL' has been cloned."

echo "HuNavSim docker system has been installed successfully."



