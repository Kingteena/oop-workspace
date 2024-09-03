#include <iostream>

#include "Appliance.h"
#include "TV.h"

int main() {
  TV myFridge = TV(2, 3);
  std::cout << myFridge.get_isOn() << " " << myFridge.get_powerRating() << " "
            << myFridge.getScreenSize() << std::endl;
  myFridge.turnOn();
  myFridge.set_powerRating(50);
  myFridge.setScreenSize(100);
  std::cout << myFridge.get_isOn() << " " << myFridge.get_powerRating() << " "
            << myFridge.getScreenSize() << std::endl;
  std::cout << myFridge.getPowerConsumption() << std::endl;
}