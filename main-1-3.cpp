#include <iostream>

#include "Bus.h"
#include "Car.h"
#include "Motorbike.h"
#include "ParkingLot.h"


int main() {
  ParkingLot lot = ParkingLot(10);

  std::cout << "What is the kind of vehicle you want? 1.Car, 2.Bus, 3.Motocycle? ";

  for (int i = 0; i < 5; i++)
  {
    Car temp = Car(i);
    lot.parkVehicle(&temp);
  }
  for (int i = 0; i < 3; i++)
  {
    Bus temp = Bus(5+i);
    lot.parkVehicle(&temp);
  }
  for (int i = 0; i < 2; i++)
  {
    Motorbike temp = Motorbike(8+i);
    lot.parkVehicle(&temp);
  }
  
  std::cout << lot.countOverstayingVehicles(15) << std::endl;
  
  

  return 0;
}