#include "Bus.h"

int Bus::getParkingDuration() { return int(time(NULL) - timeOfEntry); }
