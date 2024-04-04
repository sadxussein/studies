#include "Broom.h"

Broom::Broom() : AirVehicle("Broom", 20) {}

void Broom::calculateTravelTime(float distance) {
    int coefficient = std::fmod(distance, speed);
    travelTime = (distance * (1 - 0.1 * coefficient)) / speed;
}
