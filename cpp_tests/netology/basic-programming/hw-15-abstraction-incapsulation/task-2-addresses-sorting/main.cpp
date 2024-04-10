#include <iostream>
#include <fstream>
#include <vector>

#include "Address.h"

int main() {
    std::ifstream in_file("in.txt");
    if (!in_file.is_open()) {
        std::cerr << "Couldn't open file for reading." << std::endl;
        return 1;
    }
    int address_count;
    in_file >> address_count;
    std::vector<Address> addresses;
    std::string city, street;
    int house, apartment;
    for (int i = 0; i < address_count; i ++) {
        std::getline(in_file >> std::ws, city, '\n');
        std::getline(in_file >> std::ws, street, '\n');
        in_file >> house >> apartment;
        addresses.emplace_back(city, street, house, apartment);
    }
    std::sort(addresses.begin(), addresses.end());
    std::ofstream out_file("out.txt");
    out_file << address_count << std::endl;
    for (const auto& address : addresses) {
        out_file << address.show();
    }
    return 0;
}