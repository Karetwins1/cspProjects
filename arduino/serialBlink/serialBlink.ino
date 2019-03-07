void setup() {
  // initialize digital pin LED_BUILTIN as
  Serial.begin(9600); 
  Serial.println("love you");
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  Serial.println("on");
  delay(1000);
  digitalWrite(13,LOW);
  Serial.println("off");
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
