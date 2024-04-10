#include "AllTerrainBoots.h"

AllTerrainBoots::AllTerrainBoots() : LandVehicle("All-terrain boots", 6, 60) {}

void AllTerrainBoots::calculateTravelTime(float distance) {
    travelTime = distance / speed;

    int restCount;
    if (std::fmod(distance, speed) == 0) {
        restCount = travelTime / restTime;
    } else {
        restCount = travelTime / restTime + 1;
    }

    if (restCount < 2) {
        this->travelTime = this->travelTime + 10 * restCount;
    } else {
        this->travelTime = this->travelTime + 10 + (restCount - 1) * 5;
    }
}
