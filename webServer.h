/*
 * Webserver module
 * Provides a webpage to control the temperature/ramp profile, and provides real-time monitoring of the roast.
 * Also serves other aux pages for things like uploading files and listing/downloading temperature logs, etc.
 * Uses websockets to stream/push temperature data to the browser in real time.
 */
 
#ifndef WEBSERVER_H
#define WEBSERVER_H

#include <Arduino.h>
#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>
#include <WebSocketsServer.h>


extern ESP8266WebServer server;
extern WebSocketsServer webSocket;

void webserverSetup(void);
void webserverPushDatapoint(uint32_t timestamp, double setpoint, double output, double temperature);
void webserverLog(String log);
void webserverPushData(String name, double data);

#endif  //WEBSERVER_H
