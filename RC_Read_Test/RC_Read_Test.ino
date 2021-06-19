// Test routine to read RC reciever channels and display pwm values on serial display

int ch1;
int ch2;
int ch3;
int ch4;
int ch5;
int ch6;

void setup() {
  pinMode (2, INPUT); //Thro
  pinMode (4, INPUT); //Elev
  pinMode (5, INPUT); //Aile
  pinMode (6, INPUT); //Rudd
  pinMode (7, INPUT); //Aux1
  pinMode (12, INPUT);//Gear

  Serial.begin(9600);
}

void loop() {
  ch1 = pulseIn(2, HIGH, 25000);
  ch2 = pulseIn(4, HIGH, 25000);
  ch3 = pulseIn(5, HIGH, 25000);
  ch4 = pulseIn(6, HIGH, 25000);
  ch5 = pulseIn(7, HIGH, 25000);
  ch6 = pulseIn(12, HIGH, 25000);

  Serial.print("Thro: ");
  Serial.print(ch1);
  
  Serial.print("Elev: ");
  Serial.print(ch2);

  Serial.print("Aile: ");
  Serial.print(ch3);

  Serial.print("Rudd: ");
  Serial.print(ch4);

  Serial.print("Aux1: ");
  Serial.print(ch5);

  Serial.print("Gear: ");
  Serial.print(ch6);

  Serial.println();
  delay(100);

}
