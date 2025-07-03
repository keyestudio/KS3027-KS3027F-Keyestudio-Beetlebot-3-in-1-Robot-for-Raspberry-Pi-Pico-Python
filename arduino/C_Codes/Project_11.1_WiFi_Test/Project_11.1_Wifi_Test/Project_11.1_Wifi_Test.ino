//**********************************************************************************
/*
 * Filename    : WiFi Test
 * Description : Test the IP address of the WiFi module
 * Author      : http://www.keyestudio.com
*/
#include <ESP8266WiFi.h>
#include <ESP8266mDNS.h>
#include <WiFiClient.h>

#ifndef STASSID
//#define STASSID "your-SSID"
//#define STAPSK  "your-password"
#define STASSID "ChinaNet-2.4G-0DF0"   // User WiFi name
#define STAPSK  "ChinaNet@233"        // User WiFi password
#endif

const char* ssid = STASSID;
const char* password = STAPSK;

// Create TCP server on port 80 to respond to HTTP requests
WiFiServer server(80);

void setup(void) 
{
  Serial.begin(115200);

  // Connect to WiFi
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  Serial.println("");

  // Wait for connection
  while (WiFi.status() != WL_CONNECTED) 
  {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.print("Connected to ");
  Serial.println(ssid);
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());

  // Set up mDNS responder:
  // - First parameter is the domain name
  //   Full domain name is "esp8266.local"
  // - Second parameter is the IP address
  //   Sent via WiFi
  if (!MDNS.begin("esp8266")) 
  {
    Serial.println("Error setting up MDNS responder!");
    while (1) 
    {
      delay(1000);
    }
  }
  Serial.println("mDNS responder started");

  // Start TCP (HTTP) server
  server.begin();
  Serial.println("TCP server started");

  // Add server to MDNS-SD
  MDNS.addService("http", "tcp", 80);
}

void loop(void) 
{
  MDNS.update();
  Serial.print("Connected to ");
  Serial.println(ssid);
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());
  delay(1000); 
  
  // Check if a client has connected
  WiFiClient client = server.available();
  if (!client) 
  {
    return;
  }
  Serial.println("");
  Serial.println("New client");

  // Wait for client to send valid data
  while (client.connected() && !client.available()) 
  {
    delay(1);
  }

  // Read the first line of the HTTP request
  String req = client.readStringUntil('\r');

  // HTTP request first line format: "GET /path HTTP/1.1"
  // Extract "/path" part by finding spaces
  int addr_start = req.indexOf(' ');
  int addr_end = req.indexOf(' ', addr_start + 1);
  if (addr_start == -1 || addr_end == -1) 
  {
    Serial.print("Invalid request: ");
    Serial.println(req);
    return;
  }
  req = req.substring(addr_start + 1, addr_end);
  Serial.print("Request: ");
  Serial.println(req);
  client.flush();

  String s;
  if (req == "/") 
  {
    IPAddress ip = WiFi.localIP();
    String ipStr = String(ip[0]) + '.' + String(ip[1]) + '.' + String(ip[2]) + '.' + String(ip[3]);
    s = "HTTP/1.1 200 OK\r\nContent-Type: text/html\r\n\r\n<!DOCTYPE HTML>\r\n<html>Hello from ESP8266 at ";
    s += ipStr;
    s += "</html>\r\n\r\n";
    Serial.println("Sending 200");
  } 
  else 
  {
    s = "HTTP/1.1 404 Not Found\r\n\r\n";
    Serial.println("Sending 404");
  }
  client.print(s);
  Serial.println("Done with client");
}
//**********************************************************************************