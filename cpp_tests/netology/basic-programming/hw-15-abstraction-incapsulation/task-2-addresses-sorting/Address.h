#ifndef TASK_1_ADDRESSES_ADDRESS_H
#define TASK_1_ADDRESSES_ADDRESS_H

#include <string>

class Address {
public:
    Address(std::string city, std::string street, int house, int apartment);
    [[nodiscard]] std::string show() const;
    bool operator<(const Address &other) const;
private:
    std::string city;
    std::string street;
    int house;
    int apartment;
};


#endif //TASK_1_ADDRESSES_ADDRESS_H