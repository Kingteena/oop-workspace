#include <iostream>

#include "Airplane.h"

using namespace std;

int main() {
  Airplane myAirVehicle = Airplane(3000, 200);
  cout << "fuel: " << myAirVehicle.get_fuel() << endl;
  cout << "weight: " << myAirVehicle.get_weight() << endl;
  cout << "numberOfFlights: " << myAirVehicle.get_numberOfFlights() << endl;
  cout << "numPassengers: " << myAirVehicle.get_numPassengers() << endl;

  myAirVehicle.set_fuel(95);
  myAirVehicle.set_numberOfFlights(100);
  myAirVehicle.set_weight(5690);
  myAirVehicle.reducePassenders(100);
  myAirVehicle.fly(65, 120);

  cout << "fuel: " << myAirVehicle.get_fuel() << endl;
  cout << "weight: " << myAirVehicle.get_weight() << endl;
  cout << "numberOfFlights: " << myAirVehicle.get_numberOfFlights() << endl;
  cout << "numPassengers: " << myAirVehicle.get_numPassengers() << endl;

  myAirVehicle.reducePassenders(1000);
  cout << "numPassengers: " << myAirVehicle.get_numPassengers() << endl;

  return 0;
}