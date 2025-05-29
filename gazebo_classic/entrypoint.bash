#!/bin/bash

echo -e "\e[36m_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-__-⁻-_-⁻-_-⁻-_-⁻-_\e[0m"
echo -e "\e[36m        HuNavSim Gazebo Classic System\e[0m"
echo -e "\e[36m_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-__-⁻-_-⁻-_-⁻-_-⁻-_\e[0m"

# Source ROS and the workspace inside the docker container
source /opt/ros/humble/setup.bash
source /home/pmb2_ws/install/setup.bash
source /usr/share/gazebo/setup.sh
error=false
# Compile the workspace
echo "Compiling the workspace..."
cd /home/hunav_gz_classic_ws
if ! colcon build --symlink-install; then
    echo "Error: the workspace compilation failed! Stopping the script and opening a bash shell."
    error=true
    exec bash
    exit 1
fi

# source the workspace
source /home/hunav_gz_classic_ws/install/setup.bash


# Menu loop
while true; do
    echo ""
    echo -e "\e[36m========= HuNavSim Docker Menu =========\e[0m"
    #echo -e "\e[33mAvailable YAML environment files:"
    CONFIG_DIR="/home/hunav_gz_classic_ws/src/hunav_gazebo_wrapper/scenarios"
    yaml_files=($CONFIG_DIR/*.yaml)
    number_of_files=${#yaml_files[@]}
    i=1
    if [ ${#yaml_files[@]} -eq 0 ]; then
        echo -e "\e[31m  (No YAML files found!)\e[0m"
        exec bash
        exit 1
    else
        for f in "${yaml_files[@]}"; do
            fname=$(basename "$f")
            echo -e "\e[33m  $i) Run environment $fname\e[0m"
            ((i++))
        done
    fi
    echo -e "\e[33m  $i) Create a new environment with RViz\e[0m"
    rviz_option=$i
    ((i++))
    echo -e "\e[33m  $i) Open a bash shell\e[0m"
    bash_option=$i
    ((i++))
    echo -e "\e[33m  $i) Exit\e[0m"
    exit_option=$i
    echo -e "\e[33m========================================\e[0m"
    read -p "Select an option (number): " opt
    if [[ $opt =~ ^[0-9]+$ ]]; then
        idx=$((opt-1))
        if [ $idx -ge 0 ] && [ $idx -lt ${#yaml_files[@]} ]; then
            selected_yaml="${yaml_files[$idx]}"
            echo "You selected: $selected_yaml"
            MAP_VALUE=$(grep '^[[:space:]]*map:' "$selected_yaml" | head -n1 | awk -F': ' '{print $2}')
            map_name="${MAP_VALUE%.*}"
            yaml_name=$(basename "$selected_yaml")
            echo ""
            echo "Launching..."
            echo -e "\e[33mros2 launch hunav_gazebo_wrapper simulation.launch.py environment_name:=$map_name configuration_file:=$yaml_name\e[0m"
            echo ""
            ros2 launch hunav_gazebo_wrapper simulation.launch.py environment_name:=$map_name configuration_file:=$yaml_name
        elif [ "$opt" -eq "$bash_option" ]; then
            echo -e "\e[33mOpening bash shell...\e[0m"
            exec bash
        elif [ "$opt" -eq "$rviz_option" ]; then
            echo -e "\e[33mLaunching RViz with HuNavSim panel\e[0m"
            ros2 launch hunav_rviz2_panel hunav_rviz2_launch.py
        elif [ "$opt" -eq "$exit_option" ]; then
            echo -e "\e[33mExiting container.\e[0m"
            exit 0
        else
            echo -e "\e[31mInvalid option. Please try again.\e[0m"
        fi
    else
        echo -e "\e[31mInvalid selection.\e[0m"
    fi
done

