//
// Created by xussein on 4/2/2024.
//

#include "FastCamel.h"

FastCamel::FastCamel() : LandVehicle("Fast camel", 40, 10) {}

void FastCamel::calculateTravelTime(float distance) {
    travelTime = distance / speed;

    int restCount;
    if (std::fmod(distance, speed) == 0) {
        restCount = travelTime / restTime;
    } else {
        restCount = travelTime / restTime + 1;
    }

    if (restCount == 1) {
        travelTime = travelTime + 5 * restCount;
    } else if (restCount == 2) {
        travelTime = travelTime + 5 + 6.5;
    } else if (restCount > 2) {
        travelTime = travelTime + 5 + 6.5 + 8 * (restCount - 2);
    }
}
