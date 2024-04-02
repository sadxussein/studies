#include "Eagle.h"

Eagle::Eagle() : AirVehicle("Eagle", 8) {}

void Eagle::calculateTravelTime(float distance) {
    this->travelTime = (distance * 0.94) / this->speed; // multiply by 0.94 is 6% coefficient of distance shrinking
}
