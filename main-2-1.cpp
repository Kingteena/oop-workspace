#include <iostream>

#include "Appliance.h"
#include "Fridge.h"

int main() {
  Fridge myFridge = Fridge(2, 3);
  std::cout << myFridge.getIsOn() << " " << myFridge.getPowerRating() << " "
            << myFridge.getVolume() << std::endl;
  myFridge.turnOn();
  myFridge.setPowerRating(50);
  myFridge.setVolume(100);
  std::cout << myFridge.getIsOn() << " " << myFridge.getPowerRating() << " "
            << myFridge.getVolume() << std::endl;
  std::cout << myFridge.getPowerConsumption() << std::endl;
}