void setup() {
  // initialize digital pin LED_BUILTIN as
  Serial.begin(9600);
  Serial.setTimeout(10);
  Serial.println("love you");
  Serial.println("send 'On' to turn On the LED.");
  Serial.println("send 'Off' to turn Off the LED.");
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  if (Serial.available() > 0) {
    String command;
    command = Serial.readString();
    command.trim();
    if (command == "On") {
      digitalWrite(13, HIGH);
      Serial.println("On");
    }
    else if (command == "Off") {
      digitalWrite(13, LOW);
      Serial.println("Off");
    }
  }

}
