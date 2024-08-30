#include "ParkingLot.h"

#include <iostream>

using namespace std;

ParkingLot::ParkingLot(int max_capacity) : current_count(0), max_capacity(max_capacity) {vehicles = new Vehicle*[max_capacity];}

int ParkingLot::getCount() { return current_count; }

void ParkingLot::parkVehicle(Vehicle* vehicle_to_park) {
  if (current_count < max_capacity) {
    cout << vehicle_to_park->getID()<<endl;
    vehicles[current_count] = vehicle_to_park;
    current_count++;
  } else {
    cout << "The lot is full" << endl;
  }
}

void ParkingLot::unparkVehicle(int id) {
  for (int i = 0; i < current_count; i++) {
    if (vehicles[i]->getID() == id) {
      for (int j = i; j < current_count - 1; j++) {
        vehicles[j] = vehicles[j + 1];
      }
      current_count--;
      return;
    }
  }
  cout << "Vehicle not in lot" << endl;
}

ParkingLot::~ParkingLot() { delete[] vehicles; }