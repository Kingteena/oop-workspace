#include <iostream>

#include "Helicopter.h"

using namespace std;

int main() {
  Helicopter myAirVehicle = Helicopter(3000, "My Helicopter");
  cout << "fuel: " << myAirVehicle.get_fuel() << endl;
  cout << "weight: " << myAirVehicle.get_weight() << endl;
  cout << "numberOfFlights: " << myAirVehicle.get_numberOfFlights() << endl;
  cout << "name: " << myAirVehicle.get_name() << endl;

  myAirVehicle.set_fuel(80);
  myAirVehicle.set_numberOfFlights(100);
  myAirVehicle.set_weight(5690);
  myAirVehicle.set_name("Your Helicopter");
  myAirVehicle.fly(45, 10);

  cout << "fuel: " << myAirVehicle.get_fuel() << endl;
  cout << "weight: " << myAirVehicle.get_weight() << endl;
  cout << "numberOfFlights: " << myAirVehicle.get_numberOfFlights() << endl;
  cout << "name: " << myAirVehicle.get_name() << endl;

  return 0;
}