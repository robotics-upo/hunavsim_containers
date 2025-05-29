
xhost +local:docker

#Capture the current working directory
cwd=$(pwd)

docker run -it \
    --name hunav_webots_sim_container \
    --gpus all \
    --runtime=nvidia \
    --env="NVIDIA_VISIBLE_DEVICES=none" \
    --env="NVIDIA_DRIVER_CAPABILITIES=all" \
    --env="DISPLAY=$DISPLAY" \
    --env="QT_X11_NO_MITSHM=1" \
    --volume="/tmp/.X11-unix:/tmp/.X11-unix:rw" \
    --net=host \
    --privileged \
    --mount type=bind,source=$cwd/hunav_webots_ws,target=/home/hunav_webots_ws \
    hunav_webots_sim \
    bash
    
docker rm hunav_webots_sim_container

