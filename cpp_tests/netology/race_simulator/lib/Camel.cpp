//
// Created by xussein on 3/30/2024.
//

#include "Camel.h"

Camel::Camel() : LandVehicle("Camel", 10, 30) {}

void Camel::calculateTravelTime(float distance) {
    this->travelTime = distance / this->speed;
    int restCount = this->travelTime / this->restTime;
    if (restCount < 2) {
        this->travelTime = this->travelTime + 5 * restCount;
    } else {
        this->travelTime = this->travelTime + 5 + (restCount - 1) * 8;
    }
}
