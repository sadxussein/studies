//
// Created by xussein on 4/2/2024.
//

#include "Centaur.h"

Centaur::Centaur() : LandVehicle("Centaur", 15, 8) {}

void Centaur::calculateTravelTime(float distance) {
    travelTime = distance / speed;

    int restCount;
    if (std::fmod(distance, speed) == 0) {
        restCount = travelTime / restTime;
    } else {
        restCount = travelTime / restTime + 1;
    }

    this->travelTime = this->travelTime + 5 * restCount;
}
