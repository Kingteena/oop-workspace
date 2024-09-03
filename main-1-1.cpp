#include <iostream>

#include "Appliance.h"

int main() {
  Appliance app = Appliance(3);
  std::cout << app.getIsOn() << " " << app.getPowerRating() << std::endl;
  app.turnOn();
  app.setPowerRating(50);
  std::cout << app.getIsOn() << " " << app.getPowerRating() << std::endl;
}