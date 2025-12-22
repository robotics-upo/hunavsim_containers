#!/bin/bash

echo -e "\e[36m_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-__-⁻-_-⁻-_-⁻-_-⁻-_\e[0m"
echo -e "\e[36m        HuNavSim Isaac Sim System\e[0m"
echo -e "\e[36m_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-_-⁻-__-⁻-_-⁻-_-⁻-_-⁻-_\e[0m"

# Source ROS and the workspace inside the docker container
source /opt/ros/humble/setup.bash
source /home/ros2_ws/install/setup.bash

# Check if workspace exists and setup
if [ -d "/workspace/hunav_isaac_ws" ]; then
    cd /workspace/hunav_isaac_ws
    
    # Run the setup script if it exists and hasn't been run
    if [ -x "/usr/local/bin/setup_hunav_workspace.sh" ]; then
        /usr/local/bin/setup_hunav_workspace.sh
    fi
    
    # Source the workspace if it's been built
    if [ -f "/workspace/hunav_isaac_ws/install/setup.bash" ]; then
        source /workspace/hunav_isaac_ws/install/setup.bash
    fi
else
    echo -e "\e[31mError: Workspace /workspace/hunav_isaac_ws not found!\e[0m"
    exec bash
    exit 1
fi

error=false

# Verify that scenarios directory exists
SCENARIOS_DIR="/workspace/hunav_isaac_ws/src/Hunav_isaac_wrapper/src/scenarios"
if [ ! -d "$SCENARIOS_DIR" ]; then
    echo -e "\e[31mError: Scenarios directory not found at $SCENARIOS_DIR\e[0m"
    exec bash
    exit 1
fi

# Check if the hunav_isaac_wrapper package is available
if ros2 pkg list 2>/dev/null | grep -q "hunav_isaac_wrapper"; then
    LAUNCHER_AVAILABLE=true
else
    echo -e "\e[33mWarning: hunav_isaac_wrapper package not found\e[0m"
    LAUNCHER_AVAILABLE=false
fi

# Menu loop
while true; do
    echo ""
    echo -e "\e[36m========= HuNavSim Isaac Docker Menu =========\e[0m"
    
    menu_option=1
    
    # Option 1: Interactive launcher (if available)
    if [ "$LAUNCHER_AVAILABLE" = true ]; then
        echo -e "\e[33m  $menu_option) Launch HuNav Isaac Interactive Launcher\e[0m"
        interactive_option=$menu_option
        ((menu_option++))
    fi
    
    # Quick launch predefined scenarios
    echo -e "\e[33m  $menu_option) Quick Launch: Warehouse scenario (warehouse_agents.yaml)\e[0m"
    warehouse_option=$menu_option
    ((menu_option++))
    
    echo -e "\e[33m  $menu_option) Quick Launch: Hospital scenario (hospital_agents.yaml)\e[0m"
    hospital_option=$menu_option
    ((menu_option++))
    
    echo -e "\e[33m  $menu_option) Quick Launch: Office scenario (office_agents.yaml)\e[0m"
    office_option=$menu_option
    ((menu_option++))
    
    # Additional options
    echo -e "\e[33m  $menu_option) Create a new scenario with RViz\e[0m"
    rviz_option=$menu_option
    ((menu_option++))
    
    echo -e "\e[33m  $menu_option) Open a bash shell\e[0m"
    bash_option=$menu_option
    ((menu_option++))
    
    echo -e "\e[33m  $menu_option) Exit container\e[0m"
    exit_option=$menu_option
    
    echo -e "\e[33m===============================================\e[0m"
    read -p "Select an option (number): " opt
    
    if [[ $opt =~ ^[0-9]+$ ]]; then
        # Interactive launcher
        if [ "$LAUNCHER_AVAILABLE" = true ] && [ "$opt" -eq "$interactive_option" ]; then
            echo ""
            echo -e "\e[33mLaunching HuNav Isaac Interactive Launcher in terminator window...\e[0m"
            terminator -e "bash -c 'source /opt/ros/humble/setup.bash && source /home/ros2_ws/install/setup.bash && source /workspace/hunav_isaac_ws/install/setup.bash && echo -e \"\e[32m=== HuNav Isaac Interactive Launcher ===\e[0m\" && ros2 run hunav_isaac_wrapper hunav_isaac_launcher; exec bash'" 2>/dev/null &
            sleep 1
            echo -e "\e[32mInteractive launcher opened in new terminal window.\e[0m"
            
        # Quick launch: Warehouse
        elif [ "$opt" -eq "$warehouse_option" ]; then
            echo ""
            echo -e "\e[33mQuick Launch: Warehouse scenario with carter_ROS robot\e[0m"
            config_file="warehouse_agents.yaml"
            world_name="warehouse"
            robot_name="carter_ROS"
            
            if [ -f "$SCENARIOS_DIR/$config_file" ]; then
                echo -e "\e[33mLaunching $world_name simulation in terminator window...\e[0m"
                terminator -e "bash -c 'source /opt/ros/humble/setup.bash && source /home/ros2_ws/install/setup.bash && source /workspace/hunav_isaac_ws/install/setup.bash && ros2 run hunav_isaac_wrapper hunav_isaac_launcher --batch --config $config_file --world $world_name --robot $robot_name; exec bash'" 2>/dev/null &
                sleep 1
                echo -e "\e[32mSimulation launched. To add Nav2 navigation, see README for launch instructions.\e[0m"
            else
                echo -e "\e[31mError: Configuration file $config_file not found in $SCENARIOS_DIR\e[0m"
            fi
            
        # Quick launch: Hospital
        elif [ "$opt" -eq "$hospital_option" ]; then
            echo ""
            echo -e "\e[33mQuick Launch: Hospital scenario with carter_ROS robot\e[0m"
            config_file="hospital_agents.yaml"
            world_name="hospital"
            robot_name="carter_ROS"
            
            if [ -f "$SCENARIOS_DIR/$config_file" ]; then
                echo -e "\e[33mLaunching $world_name simulation in terminator window...\e[0m"
                terminator -e "bash -c 'source /opt/ros/humble/setup.bash && source /home/ros2_ws/install/setup.bash && source /workspace/hunav_isaac_ws/install/setup.bash && ros2 run hunav_isaac_wrapper hunav_isaac_launcher --batch --config $config_file --world $world_name --robot $robot_name; exec bash'" 2>/dev/null &
                sleep 1
                echo -e "\e[32mSimulation launched. To add Nav2 navigation, see README for launch instructions.\e[0m"
            else
                echo -e "\e[31mError: Configuration file $config_file not found in $SCENARIOS_DIR\e[0m"
            fi
            
        # Quick launch: Office
        elif [ "$opt" -eq "$office_option" ]; then
            echo ""
            echo -e "\e[33mQuick Launch: Office scenario with carter_ROS robot\e[0m"
            config_file="office_agents.yaml"
            world_name="office"
            robot_name="carter_ROS"
            
            if [ -f "$SCENARIOS_DIR/$config_file" ]; then
                echo -e "\e[33mLaunching $world_name simulation in terminator window...\e[0m"
                terminator -e "bash -c 'source /opt/ros/humble/setup.bash && source /home/ros2_ws/install/setup.bash && source /workspace/hunav_isaac_ws/install/setup.bash && ros2 run hunav_isaac_wrapper hunav_isaac_launcher --batch --config $config_file --world $world_name --robot $robot_name; exec bash'" 2>/dev/null &
                sleep 1
                echo -e "\e[32mSimulation launched. To add Nav2 navigation, see README for launch instructions.\e[0m"
            else
                echo -e "\e[31mError: Configuration file $config_file not found in $SCENARIOS_DIR\e[0m"
            fi
            
        # Create new scenario with RViz
        elif [ "$opt" -eq "$rviz_option" ]; then
            echo ""
            echo -e "\e[33mLaunching RViz with HuNavSim panel in terminator window...\e[0m"
            terminator -e "bash -c 'source /opt/ros/humble/setup.bash && source /home/ros2_ws/install/setup.bash && source /workspace/hunav_isaac_ws/install/setup.bash && ros2 launch hunav_rviz2_panel hunav_rviz2_launch.py; exec bash'" 2>/dev/null &
            sleep 1
            echo -e "\e[32mRViz launched in new terminal window.\e[0m"
            
        # Open bash shell
        elif [ "$opt" -eq "$bash_option" ]; then
            echo ""
            echo -e "\e[33mOpening a new terminal with terminator...\e[0m"
            terminator 2>/dev/null &
            sleep 1
            echo -e "\e[32mTerminal window opened.\e[0m"
            
        # Exit container
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
