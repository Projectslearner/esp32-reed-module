/*
    Project name: ESP32 Reed Switch Module
    Modified Date: 25-06-2024
    Code by: Projectslearner
    Website: https://projectslearner.com/learn/esp32-reed-switch
*/

const int reedPin = 23; // GPIO pin connected to the Reed switch
const int ledPin = 2;   // GPIO pin connected to an LED (for indication)

void setup() {
  Serial.begin(9600); // Initialize serial communication
  pinMode(reedPin, INPUT_PULLUP); // Initialize the Reed switch pin as input with internal pull-up resistor
  pinMode(ledPin, OUTPUT); // Initialize the LED pin as output
}

void loop() {
  // Read the state of the Reed switch
  int reedState = digitalRead(reedPin);

  // Check if the Reed switch is closed (magnet is near)
  if (reedState == LOW) {
    Serial.println("Magnet is near!");
    digitalWrite(ledPin, HIGH); // Turn on the LED
  } else {
    Serial.println("Magnet is far!");
    digitalWrite(ledPin, LOW); // Turn off the LED
  }

  delay(500); // Add a delay before the next reading
}
