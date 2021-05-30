# Parking-Assistance-System
Parking assistance system will measure the disctance between simulated car and the obstacles to ensure that no collision happens. A microcontroller and utransonic sensor is used for this purpose.

# Scope:
The scope of the project is to design, Implement and test parking assistance system. Following are the intended features of parking assistance system:
•	The device should be portable so it need to be powered by powered by batteries (2xAA). 
•	A beeper needs to be used to provide indication for car at different levels.
•	Power saving strategy need to be implemented. 

# Requirements:
To measure the distance between the simulated car (your Arduino system) and different objects, connect an ultrasonic sensor to your Arduino. Use a beeper to signal the distance to objects by differing tone frequencies. The resulting device must be powered by batteries (2xAA), so we have to integrate a power-saving strategy.

# Design:

# Schematics
![GitHub Logo](/images/logo.png)
Format: ![Hardware-Design](url)
# Components:
Label	Part Type	Properties:
J1	Piezo Speaker	
LED1	Green (570nm) LED	color Green (570nm); leg yes; package 5 mm [THT]
LED3	Red (633nm) LED	color Red (633nm); leg yes; package 5 mm [THT]
Arduino Uno (Rev3) - ICSP	type Arduino UNO (Rev3) - ICSP
R1	220Ω Resistor	package THT; bands 4; pin spacing 400 mil; tolerance ±5%; resistance 220Ω
R2	220Ω Resistor	package THT; bands 4; pin spacing 400 mil; tolerance ±5%; resistance 220Ω
R3	220Ω Resistor	package 0603 [SMD]; tolerance ±5%; resistance 220Ω
S1	Pushbutton	package [THT]
VCC1	Battery	voltage 3V
