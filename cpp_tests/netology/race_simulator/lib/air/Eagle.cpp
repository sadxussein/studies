#include "Eagle.h"

Eagle::Eagle() : AirVehicle("Eagle", 8) {}

void Eagle::calculateTravelTime(float distance) {
    travelTime = (distance * 0.94f) / speed; // multiply by 0.94 is 6% coefficient of distance shrinking
}
