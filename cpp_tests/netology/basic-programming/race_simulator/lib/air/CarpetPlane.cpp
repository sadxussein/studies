#include "CarpetPlane.h"

CarpetPlane::CarpetPlane() : AirVehicle("Carpet plane", 10) {}

void CarpetPlane::calculateTravelTime(float distance) {
    if (distance < 1000) {
        travelTime = travelTime / speed;
    } else if (distance < 5000) {
        travelTime = (distance * 0.97f) / speed;
    } else if (distance < 10000) {
        travelTime = (distance * 0.9f) / speed;
    } else if (distance >= 10000) {
        travelTime = (distance * 0.95f) / speed;
    }
}
