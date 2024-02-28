#ifndef SMARTGEYSER_H
#define SMARTGEYSER_H
#include<iostream>
#include<string>
using namespace std;
#include "EnvironmentSensor.h"
#include "WaterHeater.h"

class SmartGeyser {
public:
  SmartGeyser(EnvironmentSensor* sensor, WaterHeater* heater);

  void turnOn(bool activate);
  bool isOn() const;

private:
  bool isOn_;
  EnvironmentSensor* sensor_;
  WaterHeater* heater_;
};

#endif // SMARTGEYSER_H
