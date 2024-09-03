#include "House.h"

House::House() { House(0); }

House::House(int numAppliances) {
  this->numAppliances = 0;
  maxAppliances = numAppliances;
  this->appilances = new Appliance*[numAppliances];
}

bool House::addAppliance(Appliance* appliance) {
  if (numAppliances == maxAppliances) {
    return false;
  }
  appilances[numAppliances] = appliance;
  numAppliances++;
  return true;
}

double House::getTotalPowerConsumption() {
  double total = 0;

  for (int i = 0; i < numAppliances; i++) {
    total += appilances[i]->getPowerConsumption();
  }

  return total;
}

House::~House() { delete[] appilances; }