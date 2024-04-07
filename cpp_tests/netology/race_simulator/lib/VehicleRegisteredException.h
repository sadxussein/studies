#ifndef RACE_SIMULATOR_VEHICLEREGISTEREDEXCEPTION_H
#define RACE_SIMULATOR_VEHICLEREGISTEREDEXCEPTION_H


#include <exception>
#include <string>

class VehicleRegisteredException : public std::exception {
public:
    explicit VehicleRegisteredException(const std::string & message);
    [[nodiscard]] const char * what() const noexcept override;
private:
    std::string message;
};


#endif //RACE_SIMULATOR_VEHICLEREGISTEREDEXCEPTION_H
