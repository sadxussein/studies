#include "Address.h"

Address::Address(std::string city, std::string street, int house, int apartment):
    city(std::move(city)), street(std::move(street)), house(house), apartment(apartment) {}

std::string Address::show() const {
    return std::string(this->city + ", " + this->street + ", " + std::to_string(this->house) + ", " + std::to_string(this->apartment) + "\n");
}

bool Address::operator<(const Address &other) const {
    return this->city < other.city;
}
