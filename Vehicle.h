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

inline int Vehicle::getParkingDuration() {return int(time(NULL) - timeOfEntry); }

Vehicle::Vehicle() : id(0) {time(&timeOfEntry);};

Vehicle::Vehicle(int id) : id(id) { time(&timeOfEntry); }

int Vehicle::getID() { return id; }

#endif