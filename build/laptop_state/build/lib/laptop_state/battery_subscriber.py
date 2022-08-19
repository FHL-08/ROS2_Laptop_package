import rclpy
from rclpy.node import Node

from sensor_msgs.msg import BatteryState

status = ("Unknown", "Charging", "Discharging", "Not Charging", "Full")
tech = ("Unknown", "NiMH", "Li-ion", "LiPo", "LiFe", "NiCad", "LiMn")
health = ("Unknown", "Good", "Overheat", "Dead", "Overvoltage", "Unspec_Failure", "Cold", "Watchdog Timer Expire", "Safety Timer Expire")

class BatterySubscriber(Node):

    def __init__(self):
        super().__init__('battery_subcriber')
        self.subscription = self.create_subscription(BatteryState, 'battery_topic', self.listener_callback, 10)
        self.subscription #prevent unused variable warning

    def listener_callback(self, battery):
        print("="*5)
        self.get_logger().info("Serial Number: %s"%battery.serial_number)
        self.get_logger().info("Voltage: %s V"%battery.voltage)
        self.get_logger().info("Temperature: %s °C"%battery.temperature)
        self.get_logger().info("Current: %s A"%battery.current)
        charge = (battery.charge)*1000
        self.get_logger().info("Charge: %s mAh"%charge)
        capacity = (battery.capacity)*1000
        self.get_logger().info("Capacity: %s mAh"%capacity)
        design_capacity = (battery.design_capacity)*1000
        self.get_logger().info("Design_Cpacity: %s mAh"%design_capacity)
        percentage = (battery.percentage)*100
        self.get_logger().info("Battery_Level: %s%%"%percentage)
        stat = status[int(battery.power_supply_status)]
        self.get_logger().info("Power Supply Status: %s"%stat)
        supply_health = health[int(battery.power_supply_health)]
        self.get_logger().info("Power Supply Health: %s"%supply_health)
        supply_tech = tech[int(battery.power_supply_technology)]
        self.get_logger().info("Power Supply Technology: %s"%supply_tech)
        if battery.present:
            self.get_logger().info("Battery is present")
        else:
            self.get_logger().info("Battery is not present")

def main(args=None):
    rclpy.init(args=args)
    battery_subscriber = BatterySubscriber()
    rclpy.spin(battery_subscriber)
    battery_subscriber.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
