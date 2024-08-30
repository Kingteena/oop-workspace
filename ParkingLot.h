#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include "Vehicle.h"

class ParkingLot {
 private:
  int current_count, max_capacity;
  Vehicle** vehicles;

 public:
  ParkingLot(int max_capacity);
  int getCount();
  void parkVehicle(Vehicle* vehicle_to_park);
  void unparkVehicle(int id);
  int countOverstayingVehicles(int maxParkingDuration);
  ~ParkingLot();
};

#endif