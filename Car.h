#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
 public:
  Car(int id) : Vehicle(id) {};
  int getParkingDuration();
};

int Car::getParkingDuration() { return int(time(NULL) - timeOfEntry) * 0.9 ; }

#endif