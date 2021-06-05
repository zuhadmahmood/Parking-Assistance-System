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
Initial Design is created using Fritzing. The ultrasonic sensor,buzzer and a 3.5 battery is connected to arduino which is programmed to detect the objects at different levels and notify using the buzzer.
# Schematics
![Hardware-Design](https://github.com/zuhadmahmood/Parking-Assistance-System/blob/a9ecaa54b2dcd59a5a30f52fa36003a6b9d7365b/Images/Scmentics.png)

# Components:
Label	Part Type	Properties:
1. Ultrasonic sensor HC-SR04
1. J1	Piezo Speaker	
1. LED	Green (570nm) LED	color Green (570nm); leg yes; package 5 mm
1. LED	Red (633nm) LED	color Red (633nm); leg yes; package 5 mm
1. Arduino Uno (Rev3) - ICSP	type Arduino UNO (Rev3) - ICSP
1. 220Ω Resistor	(3x)
1. S1	Pushbutton	
1. AA Battery 3V
1. 12BH348/CS-GR AA Battery Holder
1. MT3608 DC-DC Boost Converter
1. Arduino Pro Mini 328 - 3.3V/8MHz with Pin header 
1. OPEN-SMART CP2102 Serielles USB-zu-TTL-Adaptermodul
1. Jumper Wire 40 x 20 cm Female Female, Male Male Cable Jumper 28 AWG Wire
1. Breadboard
