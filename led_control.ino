int led1 = D0; 
int led2 = D2; 
int led3 = D4;


void setup() {

  Particle.function("led", led);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {

}

int led(String color) {
  
  // Set LED color based on the input color
  if (color == "yellow") {
    digitalWrite(led2, HIGH); // Set LED to yellow
    digitalWrite(led1, LOW);
    digitalWrite(led3, LOW);
    
  } else if (color == "green") {
    digitalWrite(led3, HIGH); // Set LED to green
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW); 
  } else if (color == "red") {
    digitalWrite(led1, HIGH); // Set LED to red
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW); 
  } else {
    return -1; // return -1 if input is neither 'yellow', 'green' or 'red'
  }
  
  return 1; // Return success
}
