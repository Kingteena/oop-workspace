#include <unistd.h>

#include <iostream>

#include "Bus.h"
#include "Car.h"
#include "Motorbike.h"
#include "Vehicle.h"

using namespace std;

int main() {
  int size;
  cout << "How many vehicles do you want? ";
  cin >> size;

  Vehicle** car_park = new Vehicle*[size];

  for (int i = 0; i < size; i++) {
    int type;
    cout << "What is the type of Vehicle " << i
         << "? 1.Motorbike, 2.Bus or 3.Car?";
    cin >> type;
    switch (type) {
      case 3: {
        Car temp = Car(i);
        car_park[i] = &temp;
        break;
      }
      case 2: {
        Bus temp = Bus(i);
        car_park[i] = &temp;
        break;
      }
      case 1: {
        Motorbike temp = Motorbike(i);
        car_park[i] = &temp;
        break;
      }
      default:
        cout << "Invalid character. Try again" << endl;
        i--;
        break;
    }
  }

  cout << "Printing parking duration" << endl;
  for (int i = 0; i < size; i++) {
    cout << "Vehicle " << i << " :" << car_park[i]->getParkingDuration()
         << endl;
  }
}