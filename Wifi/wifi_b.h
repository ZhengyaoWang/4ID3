//DHT11 Libraries
#include <Adafruit_Sensor.h>
#include <DHT.h>
#include <DHT_U.h>

//BMP180 Libraries
#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BMP085_U.h>

//HP_BH1750 Libraries
#include <hp_BH1750.h> 

//MQTT Libraries
#include <ESP8266WiFi.h>
#include <PubSubClient.h>

//Macros
#define DHTPIN 14
#define DHTTYPE DHT11
#define DELAY_BETWEEN_SAMPLES_MS 5000

//Global Variables
char* ssid = "Pixel_4161";
char* pass = "Pixel2xl";
const char* brokerAddress = "10.0.0.191";
uint16_t addressPort = 1883;

//Instantiate Sensor Objects
DHT_Unified dht(DHTPIN, DHTTYPE);
Adafruit_BMP085_Unified bmp = Adafruit_BMP085_Unified(10085);
hp_BH1750 BH1750;

//Instantiate MQTT Client
WiFiClient espClient;
PubSubClient client(espClient);
