#include <iostream>
#include <utility>

struct Address {
    std::string city;
    std::string street;
    int house_number{};
    int apart_number{};
    int postal_code{};
};

void setAddress(Address & address, std::string city, std::string street, int house_number, int apart_number, int postal_code) {
    address.city = std::move(city);
    address.street = std::move(street);
    address.house_number = house_number;
    address.apart_number = apart_number;
    address.postal_code = postal_code;
}

void getAddress(Address & address) {
    std::cout << "Address: " << address.city << std::endl
        << "Street: " << address.street << std::endl
        << "House number: " << address.house_number << std::endl
        << "Apartment number:" << address.apart_number << std::endl
        << "Postal code: " << address.postal_code << std::endl;
}

int main() {
    Address address;
    setAddress(address, "Moscow", "Tverskaya", 12, 13, 14578);
    getAddress(address);
    return 0;
}
