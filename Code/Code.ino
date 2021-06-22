#define triggerPin 9
#define echoPin 10
#define buzzer A4
#define button 11

float duration, distance;
// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(triggerPin, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600); // Starts the serial communication
}

// the loop function runs over and over again forever
void loop() {
    digitalWrite(triggerPin, LOW);   // turn the LED on (HIGH is the voltage level)
    delay(100);                       // wait for a second
    digitalWrite(triggerPin, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(100);                       // wait for a second
    digitalWrite(triggerPin, LOW);
    duration = pulseIn(echoPin, HIGH);// The length of the pulse (in microseconds)
    distance = (duration/2) / 74;  // Distance in Inches
    if (distance >= 20 || distance <= 2)
    {
       Serial.println("out of Range");
    }
    else
    {
      tone(buzzer, 3000); // Send 1KHz sound signal...
      Serial.println(duration); 
      delay((1000000/duration));        // ...for 1 sec
      noTone(buzzer);     // Stop sound...
      delay(distance);
      delay(100);
     }
   }
