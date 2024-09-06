#include "AirFleet.h"

// #include <iostream>

// using namespace std;

AirFleet::AirFleet() {
  fleet = new AirVehicle*[6];
  *fleet[0] = Airplane(20, 10);
  *fleet[1] = Helicopter(1000, "BlackHawk");
  *fleet[2] = AirVehicle(5000);
  *fleet[3] = Helicopter(100, "whiteHawk");
  *fleet[4] = Airplane(15, 20);
}

AirFleet::~AirFleet() { delete[] fleet; }

AirVehicle** AirFleet::get_fleet() { return fleet; }
