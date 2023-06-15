// Motor A connections
int ENA = 9; // L293D Enable Pin
int IN1 = 8; // L293D IN1 Pin
int IN2 = 7; // L293D IN2 Pin
int led = 3;
int pump = 10;
int i = 60;

void setup() {
  pinMode(pump, OUTPUT);
  Serial.begin(9600);
}

void I() {
 analogWrite(pump, 200);
 delay(500);
 analogWrite(pump, 0);
   delay(1000);

}

void II() {
    
  for (int i = 60; i < 200; i++){
    analogWrite(pump, i);
    delay(2);
  }

  delay(500);

    for (int i = 200; i > 60; i--){
    analogWrite(pump, i);
    delay(2);
  }

  analogWrite(pump,0);
    delay(1000);

}

void III() {
    
  for (int i = 60; i < 200; i++){
    analogWrite(pump, i);
    delay(4);
  }

  delay(500);

    for (int i = 200; i > 60; i--){
    analogWrite(pump, i);
    delay(4);
  }

  analogWrite(pump,0);
  delay(1000);
}

void IV() {
    
  for (int i = 60; i < 200; i++){
    analogWrite(pump, i);
    delay(6);
  }

  delay(500);

    for (int i = 200; i > 60; i--){
    analogWrite(pump, i);
    delay(6);
  }

  analogWrite(pump,0);
    delay(1000);

}

void V() {
    
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


void loop() {
  delay(500);
  
V();
IV();

digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);

II();
III();

digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);

V();
V();

digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);

I();
II();

digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);

I();
III();

digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);

III();
III();

digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);

III();
II();

digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);

I();
I();

digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);

II();
V();

digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);

III();
IV();

digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);

II();
I();

digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);

V();
I();

digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);

III();
V();

digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);

II();
II();

digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);

IV();
V();

digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);

V();
III();

digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);

IV();
III();

digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);

IV();
II();

digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);

IV();
IV();

digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);

IV();
I();

digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);

III();
I();

digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);

V();
II();

digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);

I();
IV();

digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);

I();
V();

digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);

II();
IV();

digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);
    



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

delay(10000);
}
