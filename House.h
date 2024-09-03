#ifndef HOUSE_H
#define HOUSE_H

#include "Appliance.h"

class House {
 private:
  Appliance** appilances;
  int numAppliances, maxAppliances;

 public:
  House();
  House(int numAppliances);

  bool addAppliance(Appliance* appliance);
  double getTotalPowerConsumption();

  ~House();
};

#endif