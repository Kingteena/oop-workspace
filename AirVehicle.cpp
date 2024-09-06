#include "AirVehicle.h"

AirVehicle::AirVehicle() {}

AirVehicle::AirVehicle(int w) : weight(w), numberOfFlights(0), fuel(100) {}

float AirVehicle::get_fuel() { return fuel; }

int AirVehicle::get_weight() { return weight; }

int AirVehicle::get_numberOfFlights() { return numberOfFlights; }

void AirVehicle::set_fuel(float fuel) {this->fuel = fuel;}

void AirVehicle::set_weight(int weight) {this->weight = weight;}

void AirVehicle::set_numberOfFlights(int numberOfFlights) {this->numberOfFlights = numberOfFlights;}

void AirVehicle::refuel() { fuel = 100; }

void AirVehicle::fly(int headwind, int minutes) { numberOfFlights++; }
