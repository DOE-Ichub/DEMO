#ifndef api_h
#define api_h

#include <Arduino.h>
#if defined(ESP8266)
#include "lib/esp8266/ESP8266HTTPClient.h"
#include "lib/esp8266/wifi/ESP8266WiFi.h"
#elif defined(ESP32)
#include "lib/wifi32/WiFi.h"
#include "lib/wifi32/HTTPClient.h"
#endif
#include "lib/ArduinoJson.h"
#include "conmqtt.h"

class Connec
{
public:
  void beginwifi(String ssid, String pass, String AccessKey);
  void beginwifi(String AccessKey);
  void timeoutmqtt();

private:
  int statusapi = 1;
  int mun = 0;
};

#endif
