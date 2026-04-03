#include <WiFi.h>
#include <HTTPClient.h>

const char* ssid = "WIFI";
const char* password = "PASSWORD";

const char* server = "http://PC_IP:5000/update";

#define TEMP_PIN 34
#define SOIL_PIN 35
#define LIGHT_PIN 32

#define FAN_PIN 26
#define PUMP_PIN 27
#define LIGHT_CTRL 25

float temperature;
int soil;
int lightVal;

void setup() {
  Serial.begin(115200);

  pinMode(FAN_PIN, OUTPUT);
  pinMode(PUMP_PIN, OUTPUT);
  pinMode(LIGHT_CTRL, OUTPUT);

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
  }
}

void loop() {
  temperature = analogRead(TEMP_PIN) * 0.1;
  soil = analogRead(SOIL_PIN);
  lightVal = analogRead(LIGHT_PIN);

  if (temperature > 30) digitalWrite(FAN_PIN, HIGH);
  else digitalWrite(FAN_PIN, LOW);

  if (soil < 2000) digitalWrite(PUMP_PIN, HIGH);
  else digitalWrite(PUMP_PIN, LOW);

  if (lightVal < 1000) digitalWrite(LIGHT_CTRL, HIGH);
  else digitalWrite(LIGHT_CTRL, LOW);

  if (WiFi.status() == WL_CONNECTED) {
    HTTPClient http;

    String url = String(server) +
      "?temp=" + temperature +
      "&soil=" + soil +
      "&light=" + lightVal;

    http.begin(url);
    http.GET();
    http.end();
  }

  delay(2000);
}