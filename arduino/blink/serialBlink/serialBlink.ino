void setup() {
  // initialize digital pin LED_BUILTIN as
  Serial.begin(9600);//Sets the data rate in bits per second 
  Serial.setTimeout(10);//sets the maximum milliseconds to wait
  Serial.println("love you");// read out love you than make new line
  Serial.println("send 'On' to turn On the LED.");//send on to serial monitor
  Serial.println("send 'Off' to turn Off the LED.");//send off to serial monitor 
  pinMode(LED_BUILTIN, OUTPUT);// ooutput 13 
}

// the loop function runs over and over again forever
void loop() {
  if (Serial.available() > 0) {// if anything there you can read it  
    String command;// create a string 
    command = Serial.readString();// serial.readString become command
    command.trim();// it fill command 
    if (command == "On") {// if on is written will trun on 13  
      digitalWrite(13, HIGH);// send energy
      Serial.println("On");// show it on
    }
    else if (command == "Off") {//if off is written will trun off 13
      digitalWrite(13, LOW);// dont send energy
      Serial.println("Off");// will show off
    }
  }
}
