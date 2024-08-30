#include "Car.h"

int Car::getParkingDuration() { return int(time(NULL) - timeOfEntry); }
