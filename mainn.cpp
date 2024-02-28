#include <iostream>
#include "HomeOwner.h"
#include "SmartGeyser.h"
#include "EnvironmentSensor.h"
#include "WaterHeater.h"

/*Flaws that are addressed
*The issue in the version was there was unwanted class system management 
*Addition of another class called a heatingSystem which tell the temperature the heater should according to external envirnoment
*Addition function in the imported classes which would calculate temperrtaure based on external factor
*/
int main() {
  HomeOwner homeowner("John Doe");
  SmartGeyser geyser;
  EnvironmentSensor sensor("Winter", 10.0f);
  WaterHeater heater;

  
  std::cout << "Homeowner " << homeowner.getName() << " wakes up." << std::endl;
  if (sensor.getSeason() == "Winter" && sensor.getTemperature() < 15.0f) {
    geyser.turnOn();
    heater.turnOn();
    std::cout << "Smart geyser is activated for a warm bath." << std::endl;
  }

  return 0;
}
