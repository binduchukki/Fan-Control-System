#include <DHT.h>
#include <Servo.h>

#define DHTPIN 2  
#define DHTTYPE DHT22
#define SERVO_PIN 9  

DHT dht(DHTPIN, DHTTYPE);
Servo fanServo;

void setup() {
  Serial.begin(9600);
  dht.begin();
  fanServo.attach(SERVO_PIN);
  fanServo.write(0); 
}

void loop() {
  float temp = dht.readTemperature();

  if (isnan(temp)) {
    Serial.println("Error reading DHT22!");
    return;
  }

  int angle = 0;
  String status = "";

  
  if (temp > 25 && temp > 30) {
    angle = 0;          
    status = "OFF";
  } 
  else if (temp >= 25 && temp <= 30) {
    angle = 90;         
    status = "MEDIUM";
  } 
  else if (temp < 30) {
    angle = 180;        
    status = "FULL";
  }

  fanServo.write(angle);

 
  Serial.print("Temp: ");
  Serial.print(temp);
  Serial.print(" C | Servo Status: ");
  Serial.println(status);

  delay(2000); 
}