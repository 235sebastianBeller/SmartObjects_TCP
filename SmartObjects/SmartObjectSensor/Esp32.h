#ifndef ESP32_H
#define ESP32_H
#include<sstream>
#include <WiFi.h>
using namespace std;
class Esp32{
  private:
    int id;
  public:
    Esp32(int id);
    void connectToInternet(const char * wifiSsid,const char * wifiPass);
    IPAddress getIpAdress();
    string getStrForSet(int distance);
    ~Esp32();

};
#endif