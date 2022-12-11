#include <Wire.h>
#include <PS4USB.h>

// create a PS4USB instance
PS4USB ps4(1);

void setup() {
  // initialize the serial port
  Serial.begin(9600);

  // initialize the PS4USB instance
  ps4.begin();
}

void loop() {
  // read the joystick position
  int xAxis = ps4.getAnalogHat(LeftHatX);
  int yAxis = ps4.getAnalogHat(LeftHatY);

  // print the joystick position
  Serial.print("X axis: ");
  Serial.println(xAxis);
  Serial.print("Y axis: ");
  Serial.println(yAxis);

  // wait for one second
  delay(1000);
}
