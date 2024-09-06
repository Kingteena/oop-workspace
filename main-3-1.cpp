#include <iostream>

#include "AirFleet.h"
#include "AirVehicle.h"

using namespace std;

int main() {
  AirFleet my_fleet = AirFleet();
  AirVehicle* vehicle;
  for (int i = 0; i < 5; i++) {
    vehicle = my_fleet.get_fleet()[i];
    cout << "Weight: " << vehicle->get_weight() << endl;
    cout << "Fuel: " << vehicle->get_fuel() << endl;
    cout << "numFlights: " << vehicle->get_numberOfFlights() << endl;
  }

  return 1;
}