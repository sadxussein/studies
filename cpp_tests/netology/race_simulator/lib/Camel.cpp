//
// Created by xussein on 3/30/2024.
//

#include "Camel.h"

Camel::Camel() : LandVehicle("Camel", 10, 30, 0) {}

float Camel::getTravelTime(float distance) {
    float travelTime;
}

Vehicle *Camel::createVehicle() {
    return new Camel();
}
