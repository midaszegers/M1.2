int ENA = 9; // L293D Enable Pin
int IN1 = 8; // L293D IN1 Pin
int IN2 = 7; // L293D IN2 Pin
int pump = 10;
int led = 3;
const int button = 2;
int buttonstate = 0;
int prevbuttonstate = 0;
int stimuli = 0;


void setup() {
  
  pinMode(ENA, OUTPUT); // Set ENA as OUTPUT
  pinMode(IN1, OUTPUT); // Set IN1 as OUTPUT
  pinMode(IN2, OUTPUT); // Set IN2 as OUTPUT
  pinMode(pump, OUTPUT); // Set IN1 as OUTPUT
  pinMode(led, OUTPUT); // Set IN2 as OUTPUT  
  

  digitalWrite(IN1, LOW); // Make the Arduino Pin 8 Low
  digitalWrite(IN2, LOW); // Make the Arduino Pin 7 Low
  digitalWrite(pump, LOW); // Make the Arduino Pin 8 Low
  digitalWrite(led, LOW); // Make the Arduino Pin 7 Low


  pinMode(button, INPUT_PULLUP);
  Serial.begin(9600);
}


void IntensityI() {
 analogWrite(pump, 75);
 delay(500);
 analogWrite(pump, 0);
 delay(1000);
}

void IntensityV() {
 analogWrite(pump, 255);
 delay(500);
 analogWrite(pump, 0);
 delay(1000);
}


//void ContinualityI() {
// analogWrite(pump, 150);
// delay(50);
// analogWrite(pump, 0);
// delay(1000);
//}

void ContinualityV() {
 analogWrite(pump, 150);
 delay(1000);
 analogWrite(pump, 0);
 delay(1000);
}


//void GradualityI() {
// analogWrite(pump, 200);
// delay(500);
// analogWrite(pump, 0);
//   delay(1000);
//
//}

void GradualityV() {
    
  for (int i = 60; i < 200; i++){
    analogWrite(pump, i);
    delay(8);
  }

  delay(500);

    for (int i = 200; i > 60; i--){
    analogWrite(pump, i);
    delay(8);
  }

  analogWrite(pump,0);
    delay(1000);

}

void QuantityI()  {
  // Pull back the conus 50 ms
  analogWrite(ENA, 255); // Enable the L293D IC
  digitalWrite(IN1, HIGH); // Make PIN 8 of the Arduino High
  digitalWrite(IN2, LOW); // Make PIN 7 of the Arduino LOW
  delay(50); // wait for 50 ms

  // Push conus forward 100 ms
  digitalWrite(IN1, LOW); // Make PIN 8 of the Arduino LOW
  digitalWrite(IN2, HIGH);// Make PIN 7 of the Arduino HIGH
  delay(100);

  // Back to neutral state 2000 ms
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  delay(1000);
}

void QuantityV() {
  // Pull back the conus 50 ms
  analogWrite(ENA, 255); // Enable the L293D IC
  digitalWrite(IN1, HIGH); // Make PIN 8 of the Arduino High
  digitalWrite(IN2, LOW); // Make PIN 7 of the Arduino LOW
  delay(50); // wait for 50 ms

  // Push conus forward 100 ms
  digitalWrite(IN1, LOW); // Make PIN 8 of the Arduino LOW
  digitalWrite(IN2, HIGH);// Make PIN 7 of the Arduino HIGH
  delay(100);

  analogWrite(ENA, 255); // Enable the L293D IC
  digitalWrite(IN1, HIGH); // Make PIN 8 of the Arduino High
  digitalWrite(IN2, LOW); // Make PIN 7 of the Arduino LOW
  delay(50); // wait for 50 ms

  // Push conus forward 100 ms
  digitalWrite(IN1, LOW); // Make PIN 8 of the Arduino LOW
  digitalWrite(IN2, HIGH);// Make PIN 7 of the Arduino HIGH
  delay(100);

  analogWrite(ENA, 255); // Enable the L293D IC
  digitalWrite(IN1, HIGH); // Make PIN 8 of the Arduino High
  digitalWrite(IN2, LOW); // Make PIN 7 of the Arduino LOW
  delay(50); // wait for 50 ms

  // Push conus forward 100 ms
  digitalWrite(IN1, LOW); // Make PIN 8 of the Arduino LOW
  digitalWrite(IN2, HIGH);// Make PIN 7 of the Arduino HIGH
  delay(100);

  analogWrite(ENA, 255); // Enable the L293D IC
  digitalWrite(IN1, HIGH); // Make PIN 8 of the Arduino High
  digitalWrite(IN2, LOW); // Make PIN 7 of the Arduino LOW
  delay(50); // wait for 50 ms

  // Push conus forward 100 ms
  digitalWrite(IN1, LOW); // Make PIN 8 of the Arduino LOW
  digitalWrite(IN2, HIGH);// Make PIN 7 of the Arduino HIGH
  delay(100);

  analogWrite(ENA, 255); // Enable the L293D IC
  digitalWrite(IN1, HIGH); // Make PIN 8 of the Arduino High
  digitalWrite(IN2, LOW); // Make PIN 7 of the Arduino LOW
  delay(50); // wait for 50 ms

  // Push conus forward 100 ms
  digitalWrite(IN1, LOW); // Make PIN 8 of the Arduino LOW
  digitalWrite(IN2, HIGH);// Make PIN 7 of the Arduino HIGH
  delay(100);

  // Back to neutral state 2000 ms
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  delay(1000);
}


void IntervalI() {
  // Pull back the conus 50 ms
  analogWrite(ENA, 255); // Enable the L293D IC
  digitalWrite(IN1, HIGH); // Make PIN 8 of the Arduino High
  digitalWrite(IN2, LOW); // Make PIN 7 of the Arduino LOW
  delay(50); // wait for 50 ms

  // Push conus forward 100 ms
  digitalWrite(IN1, LOW); // Make PIN 8 of the Arduino LOW
  digitalWrite(IN2, HIGH);// Make PIN 7 of the Arduino HIGH
  delay(50);

  analogWrite(ENA, 255); // Enable the L293D IC
  digitalWrite(IN1, HIGH); // Make PIN 8 of the Arduino High
  digitalWrite(IN2, LOW); // Make PIN 7 of the Arduino LOW
  delay(50); // wait for 50 ms

  // Push conus forward 100 ms
  digitalWrite(IN1, LOW); // Make PIN 8 of the Arduino LOW
  digitalWrite(IN2, HIGH);// Make PIN 7 of the Arduino HIGH
  delay(100);

  analogWrite(ENA, 255); // Enable the L293D IC
  digitalWrite(IN1, HIGH); // Make PIN 8 of the Arduino High
  digitalWrite(IN2, LOW); // Make PIN 7 of the Arduino LOW
  delay(50); // wait for 50 ms

  // Push conus forward 100 ms
  digitalWrite(IN1, LOW); // Make PIN 8 of the Arduino LOW
  digitalWrite(IN2, HIGH);// Make PIN 7 of the Arduino HIGH
  delay(50);

  // Back to neutral state 2000 ms
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  analogWrite(ENA, 0); // Disable the L293D IC
  delay(1000);
}

void IntervalV() {
  // Pull back the conus 50 ms
  analogWrite(ENA, 255); // Enable the L293D IC
  digitalWrite(IN1, HIGH); // Make PIN 8 of the Arduino High
  digitalWrite(IN2, LOW); // Make PIN 7 of the Arduino LOW
  delay(50); // wait for 50 ms

  // Push conus forward 100 ms
  digitalWrite(IN1, LOW); // Make PIN 8 of the Arduino LOW
  digitalWrite(IN2, HIGH);// Make PIN 7 of the Arduino HIGH
  delay(250);

  analogWrite(ENA, 255); // Enable the L293D IC
  digitalWrite(IN1, HIGH); // Make PIN 8 of the Arduino High
  digitalWrite(IN2, LOW); // Make PIN 7 of the Arduino LOW
  delay(50); // wait for 50 ms

  // Push conus forward 100 ms
  digitalWrite(IN1, LOW); // Make PIN 8 of the Arduino LOW
  digitalWrite(IN2, HIGH);// Make PIN 7 of the Arduino HIGH
  delay(250);

  analogWrite(ENA, 255); // Enable the L293D IC
  digitalWrite(IN1, HIGH); // Make PIN 8 of the Arduino High
  digitalWrite(IN2, LOW); // Make PIN 7 of the Arduino LOW
  delay(50); // wait for 50 ms

  // Push conus forward 100 ms
  digitalWrite(IN1, LOW); // Make PIN 8 of the Arduino LOW
  digitalWrite(IN2, HIGH);// Make PIN 7 of the Arduino HIGH
  delay(250);

  // Back to neutral state 2000 ms
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  analogWrite(ENA, 0); // Disable the L293D IC
  delay(1000);
}

void Blink(){
  digitalWrite(led, HIGH);
delay(100);
analogWrite(led, LOW);
delay(100);
digitalWrite(led, HIGH);
delay(100);
analogWrite(led, LOW);
delay(100);
digitalWrite(led, HIGH);
delay(100);
analogWrite(led, LOW);
delay(100);
digitalWrite(led, HIGH);
delay(100);
analogWrite(led, LOW);
delay(100);
digitalWrite(led, HIGH);
delay(100);
analogWrite(led, LOW);
delay(100);
digitalWrite(led, HIGH);
delay(100);
analogWrite(led, LOW);
delay(1000);
}


void loop() {
  buttonstate = digitalRead(button);

 Serial.println(stimuli);
  
  if (buttonstate == LOW && prevbuttonstate == HIGH) {
      
      Serial.print(stimuli);// print the current element
      Serial.println();// print the current element
      delay(1000);
      
      stimuli++;
      Blink();
  }
prevbuttonstate=buttonstate;

  if (stimuli == 1){
    IntensityI();
    delay (5000);
    }

  if (stimuli == 2){
    IntensityV();
    delay (5000);
    }

//  if (stimuli == 3){
////    ContinualityI();
//    delay (3000);
//    }

  if (stimuli == 4){
    ContinualityV();
    delay (5000);
    }


//   if (stimuli == 5){
//    GradualityI();
//    delay (5000);
//    }

   if (stimuli == 6){
    GradualityV();
    delay (5000);
    }

   
   if (stimuli == 7){
    QuantityI();
    delay (5000);
    }

    
   if (stimuli == 8){
    QuantityV();
    delay (5000);
    }


   
   if (stimuli == 9){
    IntervalV();
    delay (5000);
    }

    
   if (stimuli == 10){
    IntervalI();
    delay (5000);
    }

}
