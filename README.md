# Pir_Sensior-with-Relay
This project uses pir sensor to dectate motion and turn on 220v light bulb automatilly and turn it off when motion is not dected for 9 seconds 
Project Overview
The PirMotion Dictator With Relay is an innovative Arduino-based project designed for motion-activated control using a PIR (Passive Infrared) sensor and a relay module. This system detects motion in its vicinity and uses this input to control the activation or deactivation of connected devices, making it ideal for applications in security systems and automated lighting.

Key Components and Functionality
PIR Sensor: Detects motion by sensing changes in infrared light from objects in its field of view.
Relay Module: Acts as an interface between the PIR sensor and other devices, enabling the control of high-power loads with the low-power sensor signal.
Arduino Board: Serves as the control center, processing input from the PIR sensor and sending commands to the relay.
Light Bulb and Power Adapter: Demonstrates the system's functionality, with the light bulb acting as the controlled device, powered by a 220V AC adapter.
Application
Primarily used in automation for lighting systems, the device can turn lights on when someone enters a room and turn them off after a set period of inactivity, thereby conserving energy. The flexibility of the system allows for a wide range of other applications in automated controls and security systems.

Project Code
The provided Arduino code establishes the core functionality of the project. It involves setting up the PIR sensor and LED (representative of a more significant load controlled via relay) and defining the conditions for activation and deactivation based on motion detection and a predefined time interval of inactivity.

Usage and Customization
Users can easily adapt the code and circuitry for various applications, from simple home automation tasks to more complex security solutions. The project offers a great blend of simplicity, efficiency, and versatility for DIY enthusiasts and professionals alike.
