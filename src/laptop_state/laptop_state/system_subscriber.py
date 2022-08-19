import rclpy
from rclpy.node import Node

from custom_interfaces.msg import SystemMsg

class SystemSubscriber(Node):

    def __init__(self):
        super().__init__('system_subscriber')
        self.subscription = self.create_subscription(SystemMsg, 'system_topic', self.listener_callback, 10)
        self.subscription # prevent unused variable warning

    def listener_callback(self, system):
        print("="*5)
        self.get_logger().info("Device Neme: %s"%system.device_name)
        self.get_logger().info("Linux Version: %s"%system.linux_version)
        self.get_logger().info("CPU Model Name: %s"%system.cpu_model_name)
        self.get_logger().info("User Name: %s"%system.user_name)
        part = ', '.join(system.partitions)
        self.get_logger().info("System Partitions: [%s]"%part)
        size = str(system.system_size)[11: -1]
        self.get_logger().info("Total size of each partition in GB: %s"%size)
        self.get_logger().info("No of Logical Processors: %s"%system.cpu_processor)
        freq = str(system.frequency)[11: -1]
        self.get_logger().info("Logical CPU frequencies in MHz: %s"%freq)
        free = str(system.free_space)[11: -1]
        self.get_logger().info("Free Space on each partition in GB: %s"%free)
        self.get_logger().info("RAM Size: %s GB"%system.ram_size)
        self.get_logger().info("Used RAM Space: %s GB"%system.used_ram)
        self.get_logger().info("Available RAM Space: %s GB"%system.available_ram)
        self.get_logger().info("CPU Temperature: %s°C"%system.cpu_temp)
        cputemp = str(system.core_temp)[11: -1]
        self.get_logger().info("Temperatures for each CPU core in °C: %s"%cputemp)


def main(args=None):
    rclpy.init(args=args)

    system_subscriber = SystemSubscriber()


    rclpy.spin(system_subscriber)

    system_subscriber.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
