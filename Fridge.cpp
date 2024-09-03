#include "Fridge.h"

Fridge::Fridge() { Fridge(0, 0); }

Fridge::Fridge(int powerRating, double volume)
    : Appliance(powerRating), volume(volume) {}

void Fridge::setVolume(double volume) { this->volume = volume; }

double Fridge::getVolume() { return volume; }

double Fridge::getPowerConsumption() { return powerRating * 24 * volume / 100; }
