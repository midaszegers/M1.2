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

void I() {
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
  delay(50);

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
  analogWrite(ENA, 0); // Disable the L293D IC
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
  delay(150);

  analogWrite(ENA, 255); // Enable the L293D IC
  digitalWrite(IN1, HIGH); // Make PIN 8 of the Arduino High
  digitalWrite(IN2, LOW); // Make PIN 7 of the Arduino LOW
  delay(50); // wait for 50 ms

  // Push conus forward 100 ms
  digitalWrite(IN1, LOW); // Make PIN 8 of the Arduino LOW
  digitalWrite(IN2, HIGH);// Make PIN 7 of the Arduino HIGH
  delay(150);

  analogWrite(ENA, 255); // Enable the L293D IC
  digitalWrite(IN1, HIGH); // Make PIN 8 of the Arduino High
  digitalWrite(IN2, LOW); // Make PIN 7 of the Arduino LOW
  delay(50); // wait for 50 ms

  // Push conus forward 100 ms
  digitalWrite(IN1, LOW); // Make PIN 8 of the Arduino LOW
  digitalWrite(IN2, HIGH);// Make PIN 7 of the Arduino HIGH
  delay(150);

  // Back to neutral state 2000 ms
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  analogWrite(ENA, 0); // Disable the L293D IC
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
  delay(200);

  analogWrite(ENA, 255); // Enable the L293D IC
  digitalWrite(IN1, HIGH); // Make PIN 8 of the Arduino High
  digitalWrite(IN2, LOW); // Make PIN 7 of the Arduino LOW
  delay(50); // wait for 50 ms

  // Push conus forward 100 ms
  digitalWrite(IN1, LOW); // Make PIN 8 of the Arduino LOW
  digitalWrite(IN2, HIGH);// Make PIN 7 of the Arduino HIGH
  delay(200);

  analogWrite(ENA, 255); // Enable the L293D IC
  digitalWrite(IN1, HIGH); // Make PIN 8 of the Arduino High
  digitalWrite(IN2, LOW); // Make PIN 7 of the Arduino LOW
  delay(50); // wait for 50 ms

  // Push conus forward 100 ms
  digitalWrite(IN1, LOW); // Make PIN 8 of the Arduino LOW
  digitalWrite(IN2, HIGH);// Make PIN 7 of the Arduino HIGH
  delay(200);

  // Back to neutral state 2000 ms
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  analogWrite(ENA, 0); // Disable the L293D IC
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

void loop() {
delay(3000);

V();
I();
digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);
delay(500);

IV();
V();
digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);
delay(500);

II();
II();
digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);
delay(500);

IV();
I();
digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);
delay(500);

I();
V();
digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);
delay(500);

V();
III();
digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);
delay(500);

I();
II();
digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);
delay(500);

I();
III();
digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);
delay(500);

I();
IV();
digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);
delay(500);

III();
I();
digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);
delay(500);

V();
V();
digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);
delay(500);

II();
V();
digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);
delay(500);

V();
IV();
digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);
delay(500);

II();
I();
digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);
delay(500);

IV();
II();
digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);
delay(500);

III();
IV();
digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);
delay(500);

I();
I();
digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);
delay(500);

V();
II();
digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);
delay(500);

III();
II();
digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);
delay(500);

IV();
IV();
digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);
delay(500);

III();
V();
digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);
delay(500);

IV();
III();
digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);
delay(500);

II();
III();
digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);
delay(500);

III();
III();
digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);
delay(500);


II();
IV();
digitalWrite(led, HIGH);
delay(1000);
analogWrite(led, LOW);
delay(500);

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
