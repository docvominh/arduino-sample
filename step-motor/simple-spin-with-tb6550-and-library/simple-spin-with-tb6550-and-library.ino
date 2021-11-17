#include <Stepper.h>


#define dirPin 10
#define stepPin 11
const long stepsPerRevolution = 200;
Stepper myStepper(stepsPerRevolution, 10, 11);
void setup() {
  myStepper.setSpeed(1000);

}

void loop() {
  // put your main code here, to run repeatedly:
  myStepper.step(200);
  myStepper.step(-200);

  delay(1000);
}
