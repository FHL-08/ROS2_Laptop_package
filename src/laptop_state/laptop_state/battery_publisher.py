import rclpy
from rclpy.node import Node

import os
import sys
import subprocess

try:
    import statux
except:
    subprocess.run("pip3 install statux", shell=True)

from statux.battery import *
from sensor_msgs.msg import BatteryState

path = "/sys/class/power_supply/BAT"

if os.path.exists(path+'1'):
    path = path + '1'
elif os.path.exists(path+'0'):
    path = path + '0'
else:
    sys.exit("can't access the battery state. Path not found")

class Battery():

    def sensors(self):
        data = str(subprocess.run(["sensors"], shell=True, capture_output=True, text=True))
        data_list = data.split('\\n')
        try:
            position = (data_list.index('acpitz-acpi-0'))+2
            temp = data_list[position]
            t = temp.split(' ')
        except:
            t = []
        return t

    def find_min_volts(self):
        m_v = int(open(path+"/voltage_min_design", "r").readline().strip())
        return float(m_v)/(10**6)

    def find_voltage(self):
        v = int(open(path+"/voltage_now", "r").readline().strip())
        return float(v)/(10**6)

    def find_power(self):
        p = int(open(path+"/power_now", "r").readline().strip())
        return float(p)/(10**6)

    def find_current(self):
        try:
            c = self.find_power()/self.find_voltage()
        except:
            c = 0
        return float(c)

    def find_temperature(self):
        try:
            t = self.sensors()[8].replace('°C', '')
        except:
            t = 0
        return float(t)

    def find_charge(self):
        energy = open(path+"/energy_now", "r").readline().strip()
        energy_Wh = int(energy)/1000000
        charge = energy_Wh/self.find_voltage()
        return float(charge)

    def find_capacity(self):
        energy_full = open(path+"/energy_full", "r").readline().strip()
        energy_full_Wh = int(energy_full)/1000000
        capacity = energy_full_Wh/self.find_min_volts()
        return float(capacity)

    def find_design_capacity(self):
        energy_full_design = open(path+"/energy_full_design", "r").readline().strip()
        energy_design_Wh = int(energy_full_design)/1000000
        design_capacity = energy_design_Wh/self.find_min_volts()
        return float(design_capacity)

    def find_percentage(self):
        percent = open(path+"/capacity", "r").readline().strip()
        percent_1 = int(percent)/100
        return percent_1

    def supply_status(self):
        status = ('Unknown', 'Charging', 'Discharging', 'Notcharging', 'Full')
        s = open(path+"/status", "r").readline().strip()
        supply_status = enumerate(status)
        for i, b in supply_status:
            if s == b:
                return int(i)
        return int(3)

    def supply_technology(self):
        tech = ('Unknown', 'NiMH', 'Li-ion', 'LiPo', 'LiFe', 'NiCad', 'Li-MN')
        t = open(path+"/technology", "r").readline().strip()
        supply_tech = enumerate(tech)
        for i, b in supply_tech:
            if t == b:
                return int(i)

    def battery_crit(self):
        try:
            c = self.sensors()[12].replace('°C)', '')
        except:
            c = 0
        return float(c)

    def supply_health(self):
        health = ['Unknown', 'Good', 'Overheat', 'Dead', 'Overvoltage', 'Unspec_Failure', 'Cold']
        h = wear_level()
        if self.find_temperature() > self.battery_crit():
            return int(health.index('Overheat'))
        elif self.find_temperature() < 20 and self.find_temperature() > 0:
            return int(health.index('Cold'))
        elif self.find_voltage() > self.find_min_volts()+2:
            return int(health.index('Overvoltage'))
        elif h >= 5:
            return int(health.index('Good'))
        elif h <= 3 and h > 0:
            return int(health.index('Dead'))
        else:
            return int(health.index('Unknown'))

    def is_present(self):
        pres = int(open(path+"/present", "r").readline().strip())
        return bool(pres)

    def serial_number(self):
        s_no = open(path+"/serial_number", "r").readline().strip()
        return str(s_no)

class BatteryPublisher(Node, Battery):

    def __init__(self):
        super().__init__('battery_publisher')
        self.publisher_ = self.create_publisher(BatteryState, 'battery_topic', 10)
        timer_period = 0.5 #seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0

    def timer_callback(self):
        battery = BatteryState()
        battery.voltage = self.find_voltage()
        battery.charge = self.find_charge()
        battery.current = self.find_current()
        battery.temperature = self.find_temperature()
        battery.capacity = self.find_capacity()
        battery.design_capacity = self.find_design_capacity()
        battery.percentage = self.find_percentage()
        battery.power_supply_status = self.supply_status()
        battery.power_supply_technology = self.supply_technology()
        battery.power_supply_health = self.supply_health()
        battery.present = self.is_present()
        battery.serial_number = self.serial_number()
        self.publisher_.publish(battery)
        self.get_logger().info('Publishing: Current Battery State %d'%self.i)
        self.i += 1

def main(args=None):
    rclpy.init(args=args)
    battery_publisher = BatteryPublisher()
    rclpy.spin(battery_publisher)
    #destroy the node when it receives ctrl + C
    battery_publisher.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    try:
        main()
    except:
        print("Closing Node...")
