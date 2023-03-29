// Example for ESP8266 (NodeMCU-12E and up)
//
// WioSwitch v1.0 for WioSwitch iOS and WioSwitchWifiRemote Apple Watch App 
// Written by Chiming Lee
//

#include <FS.h>
#include <ArduinoJson.h> 	// by Benoit Blanchon Version 5.13.3
#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include <SocketIoClient.h>	// by Vincent Wyszynski Version 0.3.0

#define relay       13    // D7
#define g13         13    // D7
#define g2           2    // D4

ESP8266WebServer server;
SocketIoClient socket;

const char* ssid = “Your SSID";
const char* password = “Your PASSWORD";

String h = "wioswitch-server.herokuapp.com";
String i = "XyzXyz”; 
String m = "AbcAbc";

String e = "WioSwitch";
String id = "XyzXyz";
String msg = "AbcAbc";

char *Str = "";

void setup() {
 pinMode(g2, OUTPUT);
 pinMode(relay, OUTPUT);
 digitalWrite(relay, LOW);

 WiFi.begin(ssid, password);

 SPIFFS.begin();
 server.begin();

 socket.begin(h.c_str());
 socket.on(e.c_str(), event);
}

void loop() {
 server.handleClient();
 socket.loop();
 //delay(20);
}

void event(const char* payload, size_t length) {  
 DynamicJsonBuffer jsonBuffer(200);
 JsonObject& root = jsonBuffer.parseObject(payload);
 if (!root.success()) { }

 i = String(root["id"].as<char*>());
 m = String(root["msg"].as<char*>());

 // toggle GPIO13 and GPIO2
 if (i == id && m == "T") {
   digitalWrite(g2, !digitalRead(g2));
   digitalWrite(relay, !digitalRead(relay));
 }
 if (i == id && m == "t") {
   digitalWrite(g2, !digitalRead(g2));
   digitalWrite(relay, !digitalRead(relay));
 }

 // Turn GPIO13 on and off
 if (i == id && m == "G13") {
   digitalWrite(relay, HIGH);
   delay(150);
   digitalWrite(relay, LOW);
 }
 if (i == id && m == "g13") {
   digitalWrite(relay, HIGH);
   delay(150);
   digitalWrite(relay, LOW);
 }

 // toggle GPIO13
 if (i == id && m == "G13T") {
   //eEmit();
   digitalWrite(relay, !digitalRead(relay));
 }
 if (i == id && m == "G13t") {
   //eEmit();
   digitalWrite(relay, !digitalRead(relay));
 }
 if (i == id && m == "g13T") {
   //eEmit();
   digitalWrite(relay, !digitalRead(relay));
 }
 if (i == id && m == "g13t") {
   //eEmit();
   digitalWrite(relay, !digitalRead(relay));
 }

 // Restart
 if (i == id && m == "R") {
   ESP.restart();
 }
 if (i == id && m == "r") {
   ESP.restart();
 }
}
// end