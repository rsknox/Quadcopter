// Test routine to read RC reciever channels and display pwm values on serial display

unsigned long ch1;
unsigned long ch2;
unsigned long ch3;
unsigned long ch4;
unsigned long ch5;
unsigned long ch6;

void setup() {
  
  Serial.begin(9600);
  Serial.println(__FILE__);
  Serial.println(__DATE__);
  Serial.println(__TIME__);
  
  pinMode (10, INPUT); //Thro
  pinMode (9, INPUT); //Elev
  pinMode (8, INPUT); //Aile
  pinMode (11, INPUT); //Rudd
  pinMode (7, INPUT); //Aux1
  pinMode (12, INPUT);//Gear

  //Serial.begin(9600);
}

void loop() {
//  ch1 = pulseIn(10, HIGH, 25000);
//  ch2 = pulseIn(9, HIGH, 25000);
//  ch3 = pulseIn(8, HIGH, 25000);
//  ch4 = pulseIn(11, HIGH, 25000);
//  ch5 = pulseIn(7, HIGH, 25000);
//  ch6 = pulseIn(12, HIGH, 25000);

  ch1 = pulseIn(10, HIGH, 50000);
  ch2 = pulseIn(9, HIGH, 50000);
  ch3 = pulseIn(8, HIGH, 50000);
  ch4 = pulseIn(11, HIGH, 50000);
  ch5 = pulseIn(7, HIGH, 50000);
  ch6 = pulseIn(12, HIGH, 50000);
  
  Serial.print("Thro:");
  Serial.print(ch1);
  Serial.print(" ");
  
  Serial.print("Elev:");
  Serial.print(ch2);
  Serial.print(" ");

  Serial.print("Aile:");
  Serial.print(ch3);
  Serial.print(" ");

  Serial.print("Rudd:");
  Serial.print(ch4);
  Serial.print(" ");

//  Serial.print("Aux1:");
//  Serial.print(ch5);
//  Serial.print(" ");
//
//  Serial.print("Gear:");
//  Serial.print(ch6);
//  Serial.print(" ");

  Serial.println();
  delay(100);

}
