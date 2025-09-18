#include <WiFi.h>
#include <FirebaseClient.h>

#define WIFI_SSID "YOUR_SSID"
#define WIFI_PASSWORD "YOUR_PASSWORD"
#define WEB_API_KEY "YOUR_FIREBASE_API_KEY"
#define DATABASE_URL "YOUR_FIREBASE_DATABASE_URL"
#define USER_EMAIL "YOUR_FIREBASE_USER_EMAIL"
#define USER_PASS "YOUR_FIREBASE_USER_PASS"

void setup() {
  Serial.begin(115200);
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
}

void loop() {
  delay(10000);
}