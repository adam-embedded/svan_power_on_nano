#include <Arduino.h>

void setup() {
	Serial.begin(9600);

	pinMode(DD3,OUTPUT);
	pinMode(LED_BUILTIN,OUTPUT);

	//Flash LED to show starting
	digitalWrite(LED_BUILTIN, HIGH);
	delay(300);
	digitalWrite(LED_BUILTIN, LOW);
	delay(300);
	digitalWrite(LED_BUILTIN, HIGH);
	delay(300);
	digitalWrite(LED_BUILTIN, LOW);

	delay(600);

	digitalWrite(DD3, HIGH);
	delay(500);
	digitalWrite(DD3, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
	digitalWrite(DD3, HIGH);
	delay(500);
	digitalWrite(DD3, LOW);

	//Pulse every 10 seconds
	delay(10000);
}