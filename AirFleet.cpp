#include "AirFleet.h"

// #include <iostream>

// using namespace std;

AirFleet::AirFleet() {
  fleet = new AirVehicle*[5];
  //   AirVehicle *temp0 = new AirVehicle, *temp1 = new AirVehicle,
  //  *temp2 = new AirVehicle, *temp3 = new AirVehicle,
  //  *temp4 = new AirVehicle;

//   Airplane temp0, temp4;
//   Helicopter temp1, temp3;
//   AirVehicle temp2;

  Airplane *temp0 = new Airplane , *temp4 = new Airplane;
  Helicopter *temp1 = new Helicopter, *temp3 = new Helicopter;
  AirVehicle *temp2 = new AirVehicle;

  *temp0 = Airplane(20, 10);
  fleet[0] = temp0;

  *temp1 = Helicopter(1000, "BlackHawk");
  fleet[1] = temp1;

  *temp2 = AirVehicle(5000);
  fleet[2] = temp2;

  *temp3 = Helicopter(100, "WhiteHawk");
  fleet[3] = temp3;

  *temp4 = Airplane(15, 20);
  fleet[4] = temp4;
}

AirFleet::~AirFleet() { delete[] fleet; }

AirVehicle** AirFleet::get_fleet() { return fleet; }
