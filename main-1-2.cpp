#include <iostream>

#include "Bus.h"
#include "Car.h"
#include "Motorbike.h"
#include "ParkingLot.h"

using namespace std;

int main() {
  ParkingLot lot = ParkingLot(10);

  for (int i = 0; i < 11; i++) {
    cout << "What is the kind of vehicle you want? 1.Car, 2.Bus, 3.Motocycle? ";
    int type;
    cin >> type;

    switch (type) {
      case 1: {
        Car temp = Car(i);
        lot.parkVehicle(&temp);
        break;
      }
      case 2: {
        Bus temp = Bus(i);
        lot.parkVehicle(&temp);
        break;
      }
      case 3: {
        Motorbike temp = Motorbike(i);
        lot.parkVehicle(&temp);
        break;
      }
      default: {
        cout << "invalid number entered" << endl;
        break;
      }
    }
  }

  cout << "What Vehicle do you want to unpark? ";
  int id;
  cin >> id;

  lot.unparkVehicle(id);

  return 0;
}