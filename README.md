# ROS2_Laptop_package
## Description:
A version of the original ROS_Laptop_package in ros2 galactic
***
## Installing ros2 galactic on Ubuntu 20.04

* To install galactic, you first make sure that that you have a local which supports UTF-8
```
locale

sudo apt update && sudo apt install locales
sudo locale-gen en_US en_US.UTF-8
sudo update-locale LC_ALL=en_US.UTF-8 LANG=en_US.UTF-8
export LAND=en_US.UTF-8

locale
```

* Add the ros2 'apt' software to your system
```
sudo sh -c 'echo "deb [arch=$(dpkg --print-architecture)] http://packages.ros.org/ros2/ubuntu $(lsb_release -cs) main" > /etc/apt/sources.list.d/ros2-latest.list'
```
* Ensure that the Ubuntu universe repository is enabled.
`apt-cache policy | grep universe`

* If the universe repository is not enabled, you can enable it using these commands:
```
sudo apt install software-properties-common
sudo add-apt-repository universe
```
* Now add the ros2 apt repository to your system:
```
sudo apt update && sudo apt install curl gnupg lsb-release
sudo curl -sSL https://raw.githubusercontent.com/ros/rosdistro/master/ros.key -o /usr/share/keyrings/ros-archive-keyring.gpg
```
* Then add the repository to your source list:
```
echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/ros-archive-keyring.gpg] http://packages.ros.org/ros2/ubuntu $(source /etc/os-release && echo $UBUNTU_CODENAME) main" | sudo tee /etc/apt/sources.list.d/ros2.list > /dev/null
```
### Install ros2
```
sudo apt update
sudo apt install ros-galactic-desktop
```
* Environment configuration:
`source /opt/ros/galactic/setup.bash`

> Use the 'ros2' command to run packages similar to ros1
***
## Using ros2:
ros2 is very similar to the setup of ros1 although, there are some major changes in its makeup.
* roscore is no longer available in ros2
* all commands must now start with 'ros2' e.g. ros2 run <package_name> <node_name>
* The libraries for writing nodes is no longer 'rospy'/'roscpp' and is now 'rclpy'/'rclcpp'
* There are different package structures for Python Nodes and C++ Nodes.
  * Python Nodes do not have a CMakeLists.txt file and has been replaced with setup.py and setup.cfg
  * C++ Nodes still have CMakeLists.txt and the architecture is pretty much the same
* Creating Nodes has been made easier by most of the functions needed being included in 'rclpy'/'rclcpp'.
  * You only need to create a publisher/subscriber object which must inherit the Node class
* You need to create a separate CMake package to create custom ".msg" and ".srv" files
* ros2 does not support catkin for building projects and instead uses "colcon"
  * It usually comes with the installation but can be installed seperately using: 
    * Linux Systems: `sudo apt install python3-colcon-common-extensions`
    * Non Linux Systems: `pip install -U colcon-common-extensions`
* Like ros1, you must source the workspace before running any nodes
```
cd <workspace_name>
. install/setup.bash
```
For more information on ros2 check the documentation here: [ros2 documentation](http://docs.ros.org.ros.informatik.uni-freiburg.de/en/galactic/index.html "ros2 galactic")
***
## Using laptop_package
### Messages (.msg)
* [SystemMsg](https://github.com/FHL-08/ROS2_Laptop_Package/blob/main/src/custom_interfaces/msg/SystemMsg.msg): Describes the information about the laptop system, including information about the CPU, Disk and RAM

### Services (.srv)
* None Currently

### Topics
* The name of the topic for the battery is `/battery_topic`
* The name of the topic for the laptop is `/system_topic`
* to view the message published by each topic, run a `ros2 topic echo <topic name>`

### Installing the package
* Create a colcon workspace in a preferred location
* Make a local git pull request to download the folder
* change directory to the recently downloaded folder
* build the project using a `colcon build --symlink-install`
* source the folder using `. install/setup.bash`

### Getting the battery information
* To get the battery information, run the `battery_talker` node
* Subscribe to the publisher by running the `battery_listener` node

### Getting Laptop information
* To get the information about the laptop, run the `system_talker` node
* Subscribe to the publisher by running the `system_listener` node
