#ifndef HELICOPTER_H
#define HELICOPTER_H

#include <string>

#include "AirVehicle.h"

using namespace std;

class Helicopter : public AirVehicle {
 private:
  string name;

 public:
  Helicopter();
  Helicopter(int w, string n);

  string get_name();
  void set_name(string n);

  void fly(int headwind, int minutes);
};

#endif