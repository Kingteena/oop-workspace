#ifndef BUS_H
#define BUS_H

#include "Vehicle.h"

class Bus : public Vehicle {
 public:
  Bus(int id) : Vehicle(id) {};
  int getParkingDuration();
};

int Bus::getParkingDuration() { return int(time(NULL) - timeOfEntry) * 0.75 ; }

#endif