#ifndef VEHICLE_H
#define VEHICLE_H

#include <ctime>

class Vehicle {
 protected:
  std::time_t timeOfEntry;
  int id;

 public:
  Vehicle();
  Vehicle(int id);
  int getID();
  virtual int getParkingDuration();
};

#endif