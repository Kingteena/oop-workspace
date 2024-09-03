#include <iostream>

#include "Appliance.h"

int main() {
  Appliance app = Appliance(3);
  std::cout << app.get_isOn() << " " << app.get_powerRating() << std::endl;
  app.turnOn();
  app.set_powerRating(50);
  std::cout << app.get_isOn() << " " << app.get_powerRating() << std::endl;
}