#include "Motorbike.h"

int Motorbike::getParkingDuration() { return int(time(NULL) - timeOfEntry) * 0.85; }
