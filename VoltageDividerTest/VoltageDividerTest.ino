void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println(__FILE__);
  Serial.println(__DATE__);
  Serial.println(__TIME__);
}

void loop() {
  // put your main code here, to run repeatedly:
  int analog_in = analogRead(A0);
  float volt_in = analog_in * (5.0 / 1024.0);
 
  Serial.write("  analog in: ");
  Serial.print(analog_in);
  Serial.write("  volts in: ");
  Serial.println(volt_in);
  
  delay(2000);
}
