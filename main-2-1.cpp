#include <iostream>

#include "Appliance.h"
#include "Fridge.h"

int main() {
  Fridge myFridge = Fridge(2, 3);
  std::cout << myFridge.get_isOn() << " " << myFridge.get_powerRating() << " "
            << myFridge.getVolume() << std::endl;
  myFridge.turnOn();
  myFridge.set_powerRating(50);
  myFridge.setVolume(100);
  std::cout << myFridge.get_isOn() << " " << myFridge.get_powerRating() << " "
            << myFridge.getVolume() << std::endl;
  std::cout << myFridge.getPowerConsumption() << std::endl;
}