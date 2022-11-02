//define pins
int usTrigPin = 9;
int usEchoPin = 8;
int warmLed = 6;
int coolLed = 5;

//define individual brightness values for the warm and cool LEDs
int wBright = 255; 
int cBright = 0;

//define fade speed
int fadeSpeed = 10;

//define bed state
int bedState = 0;

int duration_us = 0;
int distance_cm = 0;


void setup() {

// begin serial port
Serial.begin (9600);

//set up pins to output or input
pinMode(usTrigPin, OUTPUT);
pinMode(usEchoPin, INPUT);
pinMode(warmLed, OUTPUT);
pinMode(coolLed, OUTPUT);
}

void loop(){
delay (500);
  UltraSonic();

  if (bedState = 0){
BedGoesUp();
  }
  else if (bedState = 1){
BedGoesDown();
  }
  
}

 void UltraSonic(){
  // generate 10-microsecond pulse to TRIG pin
  digitalWrite(usTrigPin, HIGH);
  delayMicroseconds(500);
  digitalWrite(usTrigPin, LOW);

  // measure duration of pulse from ECHO pin
  duration_us = pulseIn(usEchoPin, HIGH);

  // calculate the distance
  distance_cm = 0.017 * duration_us;

  // print the value to Serial Monitor
  // Serial.print("distance: ");
  // Serial.print(distance_cm);
  // Serial.println(" cm");

  delay (500);

  if (distance_cm > 20){
    bedState = 0;
    }
  else if (distance_cm < 20){
    bedState = 1;
    }
}

void BedGoesUp(){
    for (int i=0;i<256; i++){
      
      analogWrite(warmLed, wBright);
      wBright -=1;
      delay(fadeSpeed);

    }
    
    for (int i=0;i<256; i++){
      
      analogWrite(coolLed, cBright);
      cBright += 1;
      delay(fadeSpeed);
    }    
}

void BedGoesDown(){
    for (int i=0;i<256; i++){
      
      analogWrite(warmLed, wBright);
      wBright +=1;
      delay(fadeSpeed);

    }
    
    for (int i=0;i<256; i++){
      
      analogWrite(coolLed, cBright);
      cBright -= 1;
      delay(fadeSpeed);
    }

    }