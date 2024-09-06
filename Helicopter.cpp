#include "Helicopter.h"

Helicopter::Helicopter() : AirVehicle() {}

Helicopter::Helicopter(int w, string n) : AirVehicle(w), name(n) {}

string Helicopter::get_name() { return name; }

void Helicopter::set_name(string n) { name = n; }

void Helicopter::fly(int headwind, int minutes) {
  // Considering headwind
  float fuel_per_min;
  if (headwind >= 40) {
    fuel_per_min = 0.4;
  } else {
    fuel_per_min = 0.18;
  }

  // For overweight helicopters
  fuel_per_min += (weight - 5670) * 0.01;

  float fuel_used = fuel_per_min * minutes;

  // If the flight is feasible
  if (fuel - fuel_used > 20) {
    fuel -= fuel_used;
    numberOfFlights++;
  }
}
