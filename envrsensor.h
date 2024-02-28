#ifndef ENVIRONMENTSENSOR_H
#define ENVIRONMENTSENSOR_H
#include<iostream>
#include<string>
using namespace std;
class EnvironmentSensor {
public:
  int getTemperature() const;
  bool isSummer() const; // Assuming this method determines the season

private:
  int temperature_;
  bool isSummer_;
};

#endif // ENVIRONMENTSENSOR_H
