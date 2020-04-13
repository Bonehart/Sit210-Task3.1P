#include "Adafruit_DHT.h"

#define DHTPIN 5

#define DHTTYPE DHT11		

DHT dht(5, DHT11);

void setup() {
	Serial.begin(9600); 
	dht.begin();
}

void loop() {
    
 float temp = dht.getTempCelcius();
 Particle.publish(String(temp));

  Particle.publish("temp", String(temp), PRIVATE);
  delay(30000);               // Wait for 30 seconds



}

