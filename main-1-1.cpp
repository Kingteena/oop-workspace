#include <iostream>

#include "AirVehicle.h"

using namespace std;

int main() {
  AirVehicle myAirVehicle = AirVehicle(5);
  cout << "fuel: " << myAirVehicle.get_fuel() << endl;
  cout << "weight: " << myAirVehicle.get_weight() << endl;
  cout << "numberOfFlights: " << myAirVehicle.get_numberOfFlights() << endl;

  myAirVehicle.set_fuel(57.3);
  myAirVehicle.set_numberOfFlights(100);
  myAirVehicle.set_weight(32);
  myAirVehicle.fly(3, 2);

  cout << "fuel: " << myAirVehicle.get_fuel() << endl;
  cout << "weight: " << myAirVehicle.get_weight() << endl;
  cout << "numberOfFlights: " << myAirVehicle.get_numberOfFlights() << endl;

  return 0;
}