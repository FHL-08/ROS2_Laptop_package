import rclpy
from rclpy.node import Node

import subprocess
try:
    import statux
except:
    subprocess.run("python -m pip install statux", shell=True)

from statux.cpu import *
from statux.disks import *
from statux.ram import *
from statux.system import *
from statux.temp import *

from custom_interfaces.msg import SystemMsg

class Laptop():

    system = SystemMsg()

    def get_state(self):
        partition = partitions()
        disk_size = []
        freeSpace = []
        for i in partition:
            disk_size.append(total_size(i))
            freeSpace.append(free_space(i))
        self.system.device_name = str(hostname())
        self.system.partitions = partition #list
        self.system.system_size = disk_size #list
        self.system.cpu_processor = int(logical_cpus())
        self.system.free_space = freeSpace #list
        self.system.ram_size = float(total())/1024
        self.system.used_ram = float(used())/1024
        self.system.available_ram = float(available())/1024
        self.system.frequency = frequency() #list
        try:
            self.system.cpu_temp = float(cpu())
            self.system.core_temp = cores() #list
        except:
            self.system.cpu_temp = float(0)
            self.system.core_temp = [] #list
        self.system.cpu_model_name = str(model_name())
        self.system.user_name = str(user())
        self.system.linux_version = str(linux_distribution())

class SystemPublisher(Node, Laptop):

    def __init__(self):
        super().__init__('system_publisher')
        self.publisher_ = self.create_publisher(SystemMsg, 'system_topic', 10)
        timer_period = 0.5 # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0

    def timer_callback(self):
        self.get_state()
        self.publisher_.publish(self.system)
        self.get_logger().info("Publishing System Information: %d" % self.i)
        self.i += 1

def main(args=None):
    rclpy.init(args=args)

    system_publisher = SystemPublisher()

    rclpy.spin(system_publisher)

    system_publisher.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    try:
        main()
    except:
        print("Closing Node...")
