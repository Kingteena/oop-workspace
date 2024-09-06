#ifndef AIRVEHICLE_H
#define AIRVEHICLE_H

#include <string>

using namespace std;

class AirVehicle {
 protected:
  int weight, numberOfFlights;
  float fuel;

 public:
  AirVehicle();
  AirVehicle(int w);

  float get_fuel();
  int get_weight();
  int get_numberOfFlights();

  void set_fuel(float fuel);
  void set_weight(int weight);
  void set_numberOfFlights(int numberOfFlights);

  void refuel();
  virtual void fly(int headwind, int minutes);

  virtual void reducePassengers(int x);
  virtual int get_numPassengers();
  virtual string get_name();
  virtual void set_name(string n);
};

#endif