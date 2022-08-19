from setuptools import setup

package_name = 'laptop_state'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Faisal',
    maintainer_email='faisallawan08@gmail.com',
    description='A ROS2 Package that returns all technical-information about the current state of a laptop',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
                'battery_talker = laptop_state.battery_publisher:main',
                'battery_listener = laptop_state.battery_subscriber:main',
                'system_talker = laptop_state.system_publisher:main',
                'system_listener = laptop_state.system_subscriber:main',
        ],
    },
)
