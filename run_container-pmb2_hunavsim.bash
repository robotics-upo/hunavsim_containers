
xhost +local:docker

#Capture the current working directory
cwd=$(pwd)

docker run -it \
    --name hunavsim_pmb2 \
    --gpus all \
    --runtime=nvidia \
    --env="NVIDIA_VISIBLE_DEVICES=none" \
    --env="NVIDIA_DRIVER_CAPABILITIES=all" \
    --env="DISPLAY=$DISPLAY" \
    --env="QT_X11_NO_MITSHM=1" \
    --volume="/tmp/.X11-unix:/tmp/.X11-unix:rw" \
    --net=host \
    --privileged \
    pmb2_hunavsim \
    bash
    
docker rm hunavsim_pmb2

