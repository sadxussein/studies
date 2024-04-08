#include "Camel.h"

Camel::Camel() : LandVehicle("Camel", 10, 30) {}

void Camel::calculateTravelTime(float distance) {
    travelTime = distance / speed;

    int restCount;
    if (std::fmod(distance, speed) == 0) {
        restCount = travelTime / restTime - 1;
    } else {
        restCount = travelTime / restTime;
    }

    if (restCount < 2) {
        travelTime = travelTime + 5 * restCount;
    } else {
        travelTime = travelTime + 5 + (restCount - 1) * 8;
    }
}