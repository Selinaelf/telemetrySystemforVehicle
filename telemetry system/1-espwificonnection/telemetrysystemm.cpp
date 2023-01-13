// telemetrysystemm.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <ESP8266WiFi.h>

char* ssid = "ASUS";
char* password = "Umut228umut";
int data = 0;
WiFiClient client;

void setup() {
    Serial.begin(115200);

    WiFi.begin(ssid, password);

    while (WiFi.status() != WL_CONNECTED) {
        Serial.println(WiFi.status());
        delay(1000);
        Serial.println("Connecting to WiFi...");
    }

    Serial.println("Connected to WiFi");
    Serial.print("IP address: ");
    Serial.println(WiFi.localIP());


}

void loop() {
    delay(3000);
    if (client.connect("192.168.0.36", 1200)) {
        data++;
        client.print(data);
        Serial.println("Data sent");
    }
    else {
        Serial.println("Connection failed");
    }
    client.stop();
}
