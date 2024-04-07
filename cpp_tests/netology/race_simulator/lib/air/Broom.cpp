#include "Broom.h"

Broom::Broom() : AirVehicle("Broom", 20) {}

void Broom::calculateTravelTime(float distance) {
    int coefficient = std::floor(distance / 1000);
    travelTime = (distance * (1 - 0.01 * coefficient)) / speed;
}
