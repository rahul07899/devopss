#ifndef WATERHEATER_H
#define WATERHEATER_H
#include<iostream>
#include<string>
using namespace std;
class WaterHeater {
public:
  void heatWater(int targetTemperature);
  int getCurrentTemperature() const;

private:
  int currentTemperature_;
};

#endif // WATERHEATER_H
