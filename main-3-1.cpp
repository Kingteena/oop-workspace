#include <iostream>

#include "Fridge.h"
#include "House.h"
#include "TV.h"

using namespace std;

int main() {
  House house = House(3);

  Fridge fridge1 = Fridge(50, 90), fridge2 = Fridge(90, 50);
  TV tv1 = TV(50, 100), tv2 = TV(100, 50);

  cout << house.addAppliance(&fridge1) << endl;
  cout << house.addAppliance(&fridge2) << endl;
  cout << house.addAppliance(&tv1) << endl;
  cout << house.addAppliance(&tv2) << endl;

  cout << house.getTotalPowerConsumption() << endl;
}