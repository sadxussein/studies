#include "Camel.h"

Camel::Camel() : LandVehicle("Camel", 10, 30) {}

float Camel::CalculateTravelTime(float distance) {
    float travelTime = distance / this->speed;

    int restCount;
    if (std::fmod(distance, speed) == 0) {
        restCount = travelTime / restTime;
    } else {
        restCount = travelTime / restTime + 1;
    }

    if (restCount < 2) {
        travelTime = travelTime + 5 * restCount;
    } else {
        travelTime = travelTime + 5 + (restCount - 1) * 8;
    }

    return travelTime;
}
