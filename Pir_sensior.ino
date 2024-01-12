// Define the pins and variables
int Input_pin = 11; // Input pin for the PIR sensor
int Led_1 = 12; // Output pin for the LED
double value = 0; // Variable to store the state of the PIR sensor
int Time = 9000; // Time in milliseconds to wait (9 seconds)
int pir_state = LOW; // Variable to track the state of motion detection


void setup()
{
  Serial.begin(9600); // Start serial communication at 9600 baud rate
  pinMode(Input_pin, INPUT); // Set the PIR sensor pin as an input
  pinMode(Led_1, OUTPUT); // Set the LED pin as an output
}


void loop()
{
  value = digitalRead(Input_pin); // Read the value from the PIR sensor

  // While loop runs as long as the PIR sensor detects motion
  while (value == HIGH) {
    digitalWrite(Led_1, HIGH); // Turn on the LED

    // Check if the motion was just detected
    if (pir_state == LOW) {
      pir_state = HIGH; // Update the state to indicate motion is currently detected
      Serial.print("Motion Detected\n"); // Print a message to the serial monitor
    }

    delay(Time); // Wait for 9 seconds
    value = digitalRead(Input_pin); // Read the value from the PIR sensor again

    // Check if the motion has stopped
    if (value == LOW) {
      digitalWrite(Led_1, LOW); // Turn off the LED

      // Check if the motion had been detected previously
      if (pir_state == HIGH) {
        pir_state = LOW; // Update the state to indicate motion is no longer detected
        Serial.print("Motion not detected for 9 sec "); // Print a message to the serial monitor
        Serial.print("Turn off LED\n");
      }
    }
  }
}
