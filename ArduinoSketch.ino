/*
 * Wiring: Ultrasonic Sensor -> Arduino:
 * - VCC -------> 5VDC
 * - TRIG ------> Pin 9
 * - ECHO ------> Pin 8
 * - GND -------> GND
 *
 * Wiring: CCT LED Strip -> Arduino:
 * - Warm LEDs -> Pin 6
 * - Cool LEDs -> Pin 5
 * - GND -------> GND
 */

int trigPin = 9;  // TRIG pin
int echoPin = 8;  // ECHO pin
int wLedPin = 6;  // ECHO pin
int cLedPin = 5;  // ECHO pin

float duration_us = 0;   // Ultra-sonic sensor output
float distance_cm = 0;   // Ultra-sonic sensor output converted to cm
float distance_x = 0;    // Last measured distance in cm
float distance_y = 0;    // Second to last measured distance in cm
float distance_z = 0;    // Third to last measured distance in cm
float distance_avg = 0;  // The Average of the last three measured distances in cm

int warmBrightness = 0;  // Initial brightness value for all warm LEDs
int coolBrightness = 0;  // Initial brightness value for all cool LEDs

int fadeSpeed = 10;  //Delay in milliseconds between each brightness incrementation

void setup() {
  // begin serial port
  Serial.begin(9600);

  // configure the trigger pin to output mode
  pinMode(trigPin, OUTPUT);
  // configure the echo pin to input mode
  pinMode(echoPin, INPUT);
  // configure the warm LED pin to output mode
  pinMode(wLedPin, OUTPUT);
  // configure the cool LED pin to output mode
  pinMode(cLedPin, OUTPUT);
}
void loop() {
  ultraSonic();
}

void ultraSonic() {
  // generate 10-microsecond pulse to TRIG pin
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // measure duration of pulse from ECHO pin
  duration_us = pulseIn(echoPin, HIGH);

  // calculate the distance
  distance_cm = 0.017 * duration_us;
  distance_z = distance_y;
  distance_y = distance_x;
  distance_x = distance_cm;
  distance_avg = ((distance_x + distance_y + distance_z) / 3);

  // if the bed is up
  if (distance_avg <= 11) {
    Serial.print("Bed is up. ");
    // if the lights are already cool
    if (coolBrightness == 255) {
      Serial.print("Lights are already cool. ");
      // print the value to Serial Monitor
      Serial.print("Avg Distance: ");
      Serial.print(distance_avg);
      Serial.println(" cm");
      delay(1000);
    }
    //if the lights are not already cool
    else {
      Serial.println("Raising color Temperature. ");
      for (int i = 0; i < 255; i++) {
        // turn off the warm LEDs
        analogWrite(wLedPin, warmBrightness);
        warmBrightness -= 1;

        // turn on the cool LEDs
        analogWrite(cLedPin, coolBrightness);
        coolBrightness += 1;

        delay(fadeSpeed);
      }
    }
  }
  // if the bed is down
  else {
    Serial.print("Bed is down. ");
    // if the lights are already warm
    if (warmBrightness == 255) {
      Serial.print("Lights are already warm. ");
      // print the value to Serial Monitor
      Serial.print("Avg Distance: ");
      Serial.print(distance_avg);
      Serial.println(" cm");
      delay(1000);
    }
    //if the lights are not already warm
    else {
      Serial.println("Lowering Color Temperature.");
      for (int i = 0; i < 255; i++) {
        // turn on the warm LEDs
        analogWrite(wLedPin, warmBrightness);
        warmBrightness += 1;

        // turn off the cool LEDs
        analogWrite(cLedPin, coolBrightness);
        coolBrightness -= 1;
        
        delay(fadeSpeed);
      }
    }
  }

}
