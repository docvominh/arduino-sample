/* Example sketch to control a stepper motor with TB6560 stepper motor driver and Arduino without a library. More info: https://www.makerguides.com */

// Define stepper motor connections and steps per revolution:
#define dirPin 10
#define stepPin 11
#define delayStep 600
const long stepsPerRevolution = 200;

void setup() {
  // Declare pins as output:
  pinMode(stepPin, OUTPUT);
  pinMode(dirPin, OUTPUT);
  digitalWrite(dirPin, HIGH);
}

void loop() {



// digitalWrite(stepPin, HIGH);
// digitalWrite(stepPin, LOW);
//    delayMicroseconds(1300);

  // Spin the stepper motor 1 revolution slowly:
  for (int i = 0; i < stepsPerRevolution; i++) {
    // These four lines result in 1 step:
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(delayStep);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(delayStep);
  }

 
  delay(1000);
}
