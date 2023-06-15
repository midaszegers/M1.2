// Motor A connections
int ENA = 9; // L293D Enable Pin
int IN1 = 8; // L293D IN1 Pin
int IN2 = 7; // L293D IN2 Pin
int pump = 10;
int led = 3;

void setup()
{
  pinMode(ENA, OUTPUT); // Set ENA as OUTPUT
  pinMode(IN1, OUTPUT); // Set IN1 as OUTPUT
  pinMode(IN2, OUTPUT); // Set IN2 as OUTPUT
  pinMode(pump, OUTPUT); // Set IN1 as OUTPUT
  pinMode(led, OUTPUT); // Set IN2 as OUTPUT  

  digitalWrite(IN1, LOW); // Make the Arduino Pin 8 Low
  digitalWrite(IN2, LOW); // Make the Arduino Pin 7 Low
  digitalWrite(pump, LOW); // Make the Arduino Pin 8 Low
  digitalWrite(led, LOW); // Make the Arduino Pin 7 Low

}


///// The different stimuli \\\\\

void I()  {
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

void II() {
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

  // Back to neutral state 2000 ms
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  delay(1000);
}

void III() {
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

  // Back to neutral state 2000 ms
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  delay(1000);
}

void IV() {
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

  // Back to neutral state 2000 ms
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  delay(1000);
}

void V() {
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


void loop() {

V();
V();

digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);


III();
I();

digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);


III();
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
II();

digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);


I();
II();

digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);


I();
I();

digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);


I();
V();

digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);


IV();
I();

digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);


II();
IV();

digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);


I();
IV();

digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);


V();
II();

digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);


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


IV();
II();

digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);


III();
III();

digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);


IV();
III();

digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);


II();
I();

digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);


I();
III();

digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);


IV();
V();

digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);


V();
I();

digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);


III();
II();

digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);


II();
V();

digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);


IV();
IV();

digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);


V();
III();

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


delay(10000);
}
