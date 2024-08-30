#include "Vehicle.h"

int Vehicle::getParkingDuration() {return int(time(NULL) - timeOfEntry); }

Vehicle::Vehicle() : id(0) {time(&timeOfEntry);};

Vehicle::Vehicle(int id) : id(id) {timeOfEntry = time(NULL);}

int Vehicle::getID() { return id; }