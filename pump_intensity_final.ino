// Motor A connections
int ENA = 9; // L293D Enable Pin
int IN1 = 8; // L293D IN1 Pin
int IN2 = 7; // L293D IN2 Pin
int pump = 10;
int led = 3;

void setup() {
  pinMode(pump, OUTPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void I() {
 analogWrite(pump, 75);
 delay(500);
 analogWrite(pump, 0);
 delay(1000);
}

void II() {
 analogWrite(pump, 120);
 delay(500);
 analogWrite(pump, 0);
 delay(1000);
}

void III() {
 analogWrite(pump, 165);
 delay(500);
 analogWrite(pump, 0);
 delay(1000);
}

void IV() {
 analogWrite(pump, 210);
 delay(500);
 analogWrite(pump, 0);
 delay(1000);
}

void V() {
 analogWrite(pump, 255);
 delay(500);
 analogWrite(pump, 0);
 delay(1000);
}
void loop() {

  delay(3000);
V();
I();
digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);

II();
I();

digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);

V();
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
V();

digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);

IV();
II();

digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);

IV();
III();

digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);

I();
II();

digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);

II();
V();

digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);

II();
II();

digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);

III();
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
I();

digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);

III();
IV();

digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);

II();
III();

digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);

III();
V();

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

IV();
V();

digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);

I();
III();

digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);

II();
IV();

digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);

III();
I();

digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);

IV();
I();

digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);

IV();
IV();

digitalWrite(led, HIGH);
delay(2000);
analogWrite(led, LOW);

III();
III();

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
