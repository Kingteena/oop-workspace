#include "Airplane.h"

Airplane::Airplane() {}

Airplane::Airplane(int w, int p) : AirVehicle(w), numPassengers(p) {}

void Airplane::reducePassengers(int x) {
  numPassengers -= x;
  if (numPassengers < 0) {
    numPassengers = 0;
  }
}

int Airplane::get_numPassengers() { return numPassengers; }

void Airplane::fly(int headwind, int minutes) {
  // Considering headwind
  float fuel_per_min;
  if (headwind >= 60) {
    fuel_per_min = 0.5;
  } else {
    fuel_per_min = 0.25;
  }

  // For passengers
  fuel_per_min += numPassengers * 0.001;

  float fuel_used = fuel_per_min * minutes;

  // If the flight is feasible
  if (fuel - fuel_used > 20) {
    fuel -= fuel_used;
    numberOfFlights++;
  }
}
