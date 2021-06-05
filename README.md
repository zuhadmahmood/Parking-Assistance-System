# Parking-Assistance-System
Parking assistance system will measure the disctance between simulated car and the obstacles to ensure that no collision happens. A microcontroller and utransonic sensor is used for this purpose.

# Scope:
The scope of the project is to design, Implement and test parking assistance system. Following are the intended features of parking assistance system:
*	The device should be portable so it need to be powered by powered by batteries (2xAA). 
*	A beeper needs to be used to provide indication for car at different levels.
*	Power saving strategy need to be implemented. 

# Requirements:
To measure the distance between the simulated car (your Arduino system) and different objects, connect an ultrasonic sensor to your Arduino. Use a beeper to signal the distance to objects by differing tone frequencies. The resulting device must be powered by batteries (2xAA), so we have to integrate a power-saving strategy.

# Design:
Initial Design is created using Fritzing. The ultrasonic sensor,buzzer and a 3.5 battery is connected to arduino which is programmed to detect the objects at different levels and notify using the buzzer. MT3608 DC-DC Boost Converter will be used with the low powered arduino to minimize the input power for running the project. 
# Schematics
![Hardware-Design](https://github.com/zuhadmahmood/Parking-Assistance-System/blob/a9ecaa54b2dcd59a5a30f52fa36003a6b9d7365b/Images/Scmentics.png)

# Components:
Label	Part Type	Properties:
1. (2x) Ultrasonic sensor HC-SR04
1. (2x) J1	Piezo Speaker	
1. (2x) LED	Green (570nm) LED	color Green (570nm); leg yes; package 5 mm
1. (2x) LED	Red (633nm) LED	color Red (633nm); leg yes; package 5 mm
1. (1x) Arduino Uno (Rev3) - ICSP	type Arduino UNO (Rev3) - ICSP
1. (5x) 220Ω Resistor	
1. (2x) S1	Pushbutton / Switch	
1. (10x) AA Battery 3V 
1. (2x) 12BH348/CS-GR AA Battery Holder
1. (2x) MT3608 DC-DC Boost Converter with solded Pin header
1. (1x) Arduino Pro Mini 328 - 3.3V/8MHz with solded Pin header 
1. (1x) OPEN-SMART CP2102 Serielles USB-zu-TTL-Adaptermodul
1. (40x) Jumper Wire 40 x 20 cm Female Female, Male Male Cable Jumper 28 AWG Wire
1. (1x) Breadboard
1. (1x) Arduino to USB connector cable

# Group Members:
1. Zuhad Mahmood
2. Ramis Ali Khan Babar
