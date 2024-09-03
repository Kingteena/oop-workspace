#include <iostream>

#include "Appliance.h"
#include "TV.h"

int main() {
  TV myFridge = TV(2, 3);
  std::cout << myFridge.getIsOn() << " " << myFridge.getPowerRating() << " "
            << myFridge.getScreenSize() << std::endl;
  myFridge.turnOn();
  myFridge.setPowerRating(50);
  myFridge.setScreenSize(100);
  std::cout << myFridge.getIsOn() << " " << myFridge.getPowerRating() << " "
            << myFridge.getScreenSize() << std::endl;
  std::cout << myFridge.getPowerConsumption() << std::endl;
}