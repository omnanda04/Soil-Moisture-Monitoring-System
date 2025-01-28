# define AOUT_PIN 36
#define THRESHOLD 2500
#define LEDR 21
#define LEDG 2
#define LEDB 15
void setup() {
Serial.begin(9600);
pinMode(LEDR, OUTPUT);
pinMode(LEDG, OUTPUT);
pinMode(LEDB, OUTPUT);
}
void loop() {
int value = analogRead(AOUT_PIN); // read the analog value from sensor
if (value > THRESHOLD) {
Serial.print("Moisture Level : Low (“);
digitalWrite(LEDR, HIGH);
digitalWrite(LEDG, LOW);
digitalWrite(LEDB, LOW);
delay(1000);
digitalWrite(LEDR, LOW);
}
else
if (value > 1100 && value < 2200) {
Serial.print("Moisture Level : Medium(");
digitalWrite(LEDG, HIGH);
digitalWrite(LEDR, LOW);
digitalWrite(LEDB, LOW);
delay(1000);
digitalWrite(LEDG, LOW);
}
else {
Serial.print("Moisture Level : High(");
digitalWrite(LEDB, HIGH);
digitalWrite(LEDR, LOW);
digitalWrite(LEDG, LOW);
delay(1000);
digitalWrite(LEDB, LOW);
}
