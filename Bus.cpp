#include "Bus.h"

int Bus::getParkingDuration() { return int(time(NULL) - timeOfEntry) * 0.75; }
