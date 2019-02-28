void setup() {
  // put your setup code here, to run once:
  pinMode(12, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(12, HIGH); // tell pin 13 to trun on
  delay(1000); // waits for a 1 second 
  digitalWrite(12, LOW); // tell pin 13 to rurn off  
  delay(5000); // waits 5 seconds
  digitalWrite(12, HIGH); // tell pin 13 to trun on
  delay(6000); // waits for a 6 second 
  digitalWrite(12, LOW); // tell pin 13 to rurn off  
  delay(10000); // waits 10 seconds 
  digitalWrite(12, HIGH); // tell pin 13 to trun on
  delay(3000); // waits for a 3 second 
  digitalWrite(12, LOW); // tell pin 13 to rurn off  
  delay(8000); // waits 8 seconds 
  digitalWrite(12, HIGH); // tell pin 13 to trun on
  delay(5000); // waits for a 5 second 
  digitalWrite(12, LOW); // tell pin 13 to rurn off  
  delay(20000); // waits 20 seconds  
  
}
