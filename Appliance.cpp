#include "Appliance.h"

Appliance::Appliance(int powerRating): powerRating(powerRating), isOn(false){}

Appliance::Appliance() {Appliance(0);}

void Appliance::turnOn() {isOn = true;}

void Appliance::turnOff() {isOn = false;}

double Appliance::getPowerConsumption() { return 0.0; }

int Appliance::get_powerRating() { return powerRating; }

bool Appliance::get_isOn() { return isOn; }

void Appliance::set_powerRating(int powerRating) {this->powerRating = powerRating;}