#include "VehicleRegisteredException.h"

VehicleRegisteredException::VehicleRegisteredException(const std::string & message): message(message) {};

const char * VehicleRegisteredException::what() const noexcept {
    return message.c_str();
}
