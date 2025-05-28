# smart-irrigation-system
An Arduino-based automated irrigation system that monitors soil moisture and controls a water pump to optimize plant watering.
#Project Overview
This system helps automate watering for plants by continuously measuring the moisture in the soil. When the soil is dry beyond a set threshold, the water pump switches on to irrigate the plants. Once the soil moisture reaches a sufficient level, the pump turns off automatically. This reduces water wastage and ensures plants receive optimal hydration.

#Components Used
Arduino Uno
Soil Moisture Sensor
Relay Module (to control the pump)
Water Pump (DC)
Connecting wires and power supply

->How It Works:
The soil moisture sensor provides an analog signal representing moisture level.
The Arduino reads this sensor data and compares it to a preset threshold.
If the soil is dry, the Arduino activates the relay to switch on the pump.
If the soil is sufficiently moist, the pump is turned off.
Moisture levels and pump status can be monitored via the Arduino Serial Monitor.

Circuit Setup:
The moisture sensor analog output connects to the Arduino analog input pin.
The relay module is connected to a digital output pin to control the pump.
The water pump is powered through the relay, ensuring safe control of high current devices.
Ensure proper power supply for the pump separate from the Arduino.

#Benefits:)
Saves water by watering plants only when necessary.
Reduces manual effort for plant watering.
Protects plants from overwatering or underwatering.
Easy to set up and customize for various plant types or soil conditions.

#Possible Improvements and Extensions
Add wireless connectivity (Bluetooth or Wi-Fi) for remote monitoring and control.
Integrate an LCD or OLED display to show real-time moisture levels.
Use cloud-based data logging and alerts for smarter garden management.

