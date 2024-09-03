#include "Appliance.h"

Appliance::Appliance(int powerRating): powerRating(powerRating), isOn(false){}

Appliance::Appliance() {Appliance(0);}

void Appliance::turnOn() {isOn = true;}

void Appliance::turnOff() {isOn = false;}

double Appliance::getPowerConsumption() { return 0.0; }

int Appliance::getPowerRating() { return powerRating; }

bool Appliance::getIsOn() { return isOn; }

void Appliance::setPowerRating(int powerRating) {this->powerRating = powerRating;}