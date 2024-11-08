# Smart-Ambient-Responsive-Lighting-System-with-PWM-Control

This project implements a Smart Lighting System that dynamically adjusts the brightness of a light based on the surrounding light intensity. Instead of simply switching the light on or off, the system gradually increases or decreases the light intensity in response to changes in ambient light. The system is built using an Arduino and a LIDAR sensor to measure light intensity, with a simulation demonstrated in Proteus.


Features
Gradual adjustment of light intensity based on the external light levels.
Uses a LIDAR sensor for precise measurement of ambient light intensity.
Implemented with an Arduino and simulated in Proteus.
Real-time light intensity readings displayed on an LCD screen.
Pulse Width Modulation (PWM) used to control light intensity.
Components
Arduino Uno
LIDAR sensor (for detecting light intensity)
12V Bulb (for lighting)
2N2222 NPN Transistor (for controlling the bulb)
LCD Display (to show LIDAR and PWM values)
Resistors (10kΩ, 1kΩ)
Buzzer (optional, for feedback or alerts)
Proteus 8 Professional (for simulation)
How It Works
The LIDAR sensor continuously measures the surrounding light intensity. Based on the sensor readings, the Arduino controls the brightness of the connected bulb using PWM signals. The system gradually adjusts the light brightness to match the detected external light conditions.

High ambient light: The bulb dims or turns off.
Low ambient light: The bulb gradually brightens to provide adequate lighting.
