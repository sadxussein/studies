#include <iostream>

#include "lib/land/AllTerrainBoots.h"
#include "lib/land/Camel.h"
#include "lib/land/Centaur.h"
#include "lib/land/FastCamel.h"

#include "lib/air/Broom.h"
#include "lib/air/Eagle.h"
#include "lib/air/CarpetPlane.h"

#include "lib/VehicleFactory.h"
#include "lib/VehicleManager.h"
#include "lib/Simulation.h"

void registerClasses(const RaceType raceType) {
    switch (raceType) {
        case RaceType::land:
            VehicleFactory::getInstance().registerVehicleClass("All-terrain boots", []() -> Vehicle * {
                return new AllTerrainBoots();
            });
            VehicleFactory::getInstance().registerVehicleClass("Camel", []() -> Vehicle * {
                return new Camel();
            });
            VehicleFactory::getInstance().registerVehicleClass("Centaur", []() -> Vehicle * {
                return new Centaur();
            });
            VehicleFactory::getInstance().registerVehicleClass("Fast camel", []() -> Vehicle * {
                return new FastCamel();
            });
            break;
        case RaceType::air:
            VehicleFactory::getInstance().registerVehicleClass("Broom", []() -> Vehicle * {
                return new Broom();
            });
            VehicleFactory::getInstance().registerVehicleClass("Eagle", []() -> Vehicle * {
                return new Eagle();
            });
            VehicleFactory::getInstance().registerVehicleClass("Carpet plane", []() -> Vehicle * {
                return new CarpetPlane();
            });
            break;
        case RaceType::all:
            VehicleFactory::getInstance().registerVehicleClass("All-terrain boots", []() -> Vehicle * {
                return new AllTerrainBoots();
            });
            VehicleFactory::getInstance().registerVehicleClass("Camel", []() -> Vehicle * {
                return new Camel();
            });
            VehicleFactory::getInstance().registerVehicleClass("Centaur", []() -> Vehicle * {
                return new Centaur();
            });
            VehicleFactory::getInstance().registerVehicleClass("Fast camel", []() -> Vehicle * {
                return new FastCamel();
            });
            VehicleFactory::getInstance().registerVehicleClass("Broom", []() -> Vehicle * {
                return new Broom();
            });
            VehicleFactory::getInstance().registerVehicleClass("Eagle", []() -> Vehicle * {
                return new Eagle();
            });
            VehicleFactory::getInstance().registerVehicleClass("Carpet plane", []() -> Vehicle * {
                return new CarpetPlane();
            });
            break;
    }
}

int main() {
    std::cout << "Welcome to Race Simulator! Press CTRL + C to quit Simulator at any time." << std::endl;

    char restartInput;

    do {
        restartInput = '\0';

        std::cout <<  "1. Land vehicle only race" << std::endl
                  << "2. Air vehicle only race" << std::endl
                  << "3. Combined race" << std::endl
                  << "Input race type (1-3): ";
        char raceType;
        do {
            std::cin >> raceType;
            if (raceType < '1' || raceType > '3') {
                std::cerr << "[ERROR] Unrecognized input. Please, select valid race (1-3)." << std::endl;
            } else {
                Simulation::getInstance().setRaceType((raceType - '0') - 1);
            }
        } while (raceType < '1' || raceType > '3');

        registerClasses(Simulation::getInstance().getRaceType());

        std::cout << "Input race distance (should be positive): ";
        std::string distanceInput;
        float distance = -1;
        do {
            std::cin >> distanceInput;
            try {
                distance = std::stof(distanceInput);
            } catch (const std::exception & e) {
                std::cerr << "[ERROR] Invalid float value for race distance. Please, try again." << std::endl;
            }
            if (distance <= 0) {
                std::cerr << "[ERROR] Distance can not be equal or less zero. Please, input valid distance." << std::endl;
            }
        } while (distance <= 0);

        std::cout << "There should be at least two vehicles selected for the race simulation to start." << std::endl
                  << "Selected race type is " << Simulation::getInstance().getRaceTypeName() << "." << std::endl;
        int vehicleCounter = 1;
        for (auto & it : VehicleFactory::getInstance().getVehicleClassesNames()) {
            std::cout << vehicleCounter << ". " << it << std::endl;
            vehicleCounter ++;
        }
        std::cout << "0. Finish vehicle registration" << std::endl;

        std::cout << "Input vehicle number or 0 to finish vehicle registration: ";
        char input;
        bool isRegistrationOver = false;

        while(!isRegistrationOver) {
            do {
                std::cin >> input;
                if (input != '0') {
                    try {
                        VehicleManager::getInstance().addVehicle(VehicleFactory::getInstance().createVehicle((input - '0') - 1));
                        std::cout << "Currently registered vehicles: ";
                        for (auto & vehicle : VehicleManager::getInstance().getVehicles()) {
                            std::cout << vehicle->getName() << ' ';
                        }
                        std::cout << std::endl;
                    } catch (VehicleRegisteredException & e) {
                        std::cerr << e.what();
                    }
                } else {
                    isRegistrationOver = true;
                }
            } while (input < '0' || input > static_cast<char>('0' + VehicleFactory::getInstance().getVehicleClassesCount()));
        }

        Simulation::getInstance().simulate(distance, VehicleManager::getInstance().getVehicles());

        std::cout << Simulation::getInstance().printResult();

        VehicleManager::getInstance().cleanup();
        VehicleFactory::getInstance().cleanup();

        do {
            std::cout << "Do you want another race? (y/n): ";
            std::cin >> restartInput;
            if (restartInput == 'n') {
                std::cout << "Goodbye!" << std::endl;
            } else if (restartInput == 'y') {
                std::cout << "Starting new race sequence." << std::endl;
            } else {
                std::cerr << "[ERROR] Unrecognized input." << std::endl;
            }
        } while (restartInput != 'y' && restartInput != 'n');
    } while (restartInput != 'n');


    return 0;
}
