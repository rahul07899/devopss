#ifndef HOMEOWNER_H
#define HOMEOWNER_H
#include<iostream>
#include<string>
using namespace std;
class HomeOwner {
public:
  HomeOwner(const string& name, int preferredTemperature);

  const string& getName() const;
  int getPreferredTemperature() const;
  void setPreferredTemperature(int temperature);

private:
  string name;
  int preferredTemperature_;
};

#endif // HOMEOWNER_H
