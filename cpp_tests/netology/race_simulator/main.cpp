#include <iostream>

// TODO: perhaps move to single header file for inclusion
// TODO: maybe move headers to separate folder?
#include "lib/land/CamelFactory.h"
#include "lib/land/AllTerrainBootsFactory.h"
#include "lib/land/CentaurFactory.h"
#include "lib/land/FastCamelFactory.h"

#include "lib/air/BroomFactory.h"
#include "lib/air/EagleFactory.h"
#include "lib/air/CarpetPlaneFactory.h"

#include "lib/VehicleManager.h"
#include "lib/Simulation.h"

void vehicleSelectionOutput(const RaceType raceType, const std::string raceName) {
    std::cout << "There should be at least two vehicles selected for the race simulation to start." << std::endl
              << "Selected race type is " << raceName << "." << std::endl;
    switch (raceType) {
        case RaceType::land:
            std::cout << "1. All-terrain boots" << std::endl
                      << "2. Camel" << std::endl
                      << "3. Centaur" << std::endl
                      << "4. Fast camel" << std::endl
                      << "0. Finish vehicle registration" << std::endl;
            break;
        case RaceType::air:
            std::cout << "1. Broom" << std::endl
                      << "2. Eagle" << std::endl
                      << "3. Carpet plane" << std::endl
                      << "0. Finish vehicle registration" << std::endl;
            break;
        case RaceType::all:
            std::cout << "1. All-terrain boots" << std::endl
                      << "2. Camel" << std::endl
                      << "3. Centaur" << std::endl
                      << "4. Fast camel" << std::endl
                      << "5. Broom" << std::endl
                      << "6. Eagle" << std::endl
                      << "7. Carpet plane" << std::endl
                      << "0. Finish vehicle registration" << std::endl;
            break;
    }
}

int main() {
    Simulation * simulation = Simulation::getInstance();

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
                simulation->setRaceType((raceType - '0') - 1);
            }
        } while (raceType < '1' || raceType > '3');

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

        VehicleFactory * camelFactory = new CamelFactory();
        VehicleFactory * fastCamelFactory = new FastCamelFactory();
        VehicleFactory * allTerrainBootsFactory = new AllTerrainBootsFactory();
        VehicleFactory * centaurFactory = new CentaurFactory();
        VehicleFactory * broomFactory = new BroomFactory();
        VehicleFactory * carpetPlaneFactory = new CarpetPlaneFactory();
        VehicleFactory * eagleFactory = new EagleFactory();

        VehicleManager * vehicleManager = VehicleManager::getInstance();

        vehicleSelectionOutput(simulation->getRaceType(), simulation->getRaceTypeName());

        std::cout << "Input vehicle number or 0 to finish vehicle registration: ";
        char input = '\0';
        bool isRegistrationOver = false;
        bool * checkArray;
        switch (simulation->getRaceType()) {        // TODO: rewrite block with class register
            case RaceType::land:
                checkArray = new bool[4] {false, false, false, false};
                while (!isRegistrationOver) {
                    do {
                        std::cin >> input;
                        switch (input) {
                            case '1':
                                if (!checkArray[0]) {
                                    vehicleManager->addVehicle(allTerrainBootsFactory->createVehicle());
                                    checkArray[0] = true;
                                    std::cout << "All-terrain boots registered for the race." << std::endl;
                                } else {
                                    std::cerr << "[ERROR] This vehicle is already registered." << std::endl;
                                }
                                break;
                            case '2':
                                if (!checkArray[1]) {
                                    vehicleManager->addVehicle(camelFactory->createVehicle());
                                    checkArray[1] = true;
                                    std::cout << "Camel registered for the race." << std::endl;
                                } else {
                                    std::cerr << "[ERROR] This vehicle is already registered." << std::endl;
                                }
                                break;
                            case '3':
                                if (!checkArray[2]) {
                                    vehicleManager->addVehicle(centaurFactory->createVehicle());
                                    checkArray[2] = true;
                                    std::cout << "Centaur registered for the race." << std::endl;
                                } else {
                                    std::cerr << "[ERROR] This vehicle is already registered." << std::endl;
                                }
                                break;
                            case '4':
                                if (!checkArray[3]) {
                                    vehicleManager->addVehicle(fastCamelFactory->createVehicle());
                                    checkArray[3] = true;
                                    std::cout << "Fast camel registered for the race." << std::endl;
                                } else {
                                    std::cerr << "[ERROR] This vehicle is already registered." << std::endl;
                                }
                                break;
                            case '0':
                                if (vehicleManager->getVehicleCount() < 2) {
                                    vehicleSelectionOutput(simulation->getRaceType(), simulation->getRaceTypeName());
                                } else {
                                    isRegistrationOver = true;
                                }
                                break;
                            default:
                                std::cerr << "[ERROR] Unrecognized input. Please, select valid vehicle or finish registration." << std::endl;
                                break;
                        }
                    } while (input < '0' || input > '4');
                }
            case RaceType::air:
                checkArray = new bool[3] {false, false, false};
                while (!isRegistrationOver) {
                    do {
                        std::cin >> input;
                        switch (input) {
                            case '1':
                                if (!checkArray[0]) {
                                    vehicleManager->addVehicle(broomFactory->createVehicle());
                                    checkArray[0] = true;
                                    std::cout << "Broom registered for the race." << std::endl;     // TODO: perhaps vehicle should inform user of its name
                                } else {
                                    std::cerr << "[ERROR] This vehicle is already registered." << std::endl;
                                }
                                break;
                            case '2':
                                if (!checkArray[1]) {
                                    vehicleManager->addVehicle(eagleFactory->createVehicle());
                                    checkArray[1] = true;
                                    std::cout << "Eagle registered for the race." << std::endl;
                                } else {
                                    std::cerr << "[ERROR] This vehicle is already registered." << std::endl;
                                }
                                break;
                            case '3':
                                if (!checkArray[2]) {
                                    vehicleManager->addVehicle(carpetPlaneFactory->createVehicle());
                                    checkArray[2] = true;
                                    std::cout << "Carpet plane registered for the race." << std::endl;
                                } else {
                                    std::cerr << "[ERROR] This vehicle is already registered." << std::endl;
                                }
                                break;
                            case '0':
                                if (vehicleManager->getVehicleCount() < 2) {
                                    vehicleSelectionOutput(simulation->getRaceType(), simulation->getRaceTypeName());
                                    std::cout << "Broom registered for the race." << std::endl;
                                } else {
                                    isRegistrationOver = true;
                                }
                                break;
                            default:
                                std::cerr << "[ERROR] Unrecognized input. Please, select valid vehicle or finish registration." << std::endl;
                                break;
                        }
                    } while (input < '0' || input > '3');
                }
            case RaceType::all:
                checkArray = new bool[7] {false, false, false, false, false, false, false};
                while (!isRegistrationOver) {
                    do {
                        std::cin >> input;
                        switch (input) {
                            case '1':
                                if (!checkArray[0]) {
                                    vehicleManager->addVehicle(allTerrainBootsFactory->createVehicle());
                                    checkArray[0] = true;
                                    std::cout << "All-terrain boots registered for the race." << std::endl;
                                } else {
                                    std::cerr << "[ERROR] This vehicle is already registered." << std::endl;
                                }
                                break;
                            case '2':
                                if (!checkArray[1]) {
                                    vehicleManager->addVehicle(camelFactory->createVehicle());
                                    checkArray[1] = true;
                                    std::cout << "Camel registered for the race." << std::endl;
                                } else {
                                    std::cerr << "[ERROR] This vehicle is already registered." << std::endl;
                                }
                                break;
                            case '3':
                                if (!checkArray[2]) {
                                    vehicleManager->addVehicle(centaurFactory->createVehicle());
                                    checkArray[2] = true;
                                    std::cout << "Centaur registered for the race." << std::endl;
                                } else {
                                    std::cerr << "[ERROR] This vehicle is already registered." << std::endl;
                                }
                                break;
                            case '4':
                                if (!checkArray[3]) {
                                    vehicleManager->addVehicle(fastCamelFactory->createVehicle());
                                    checkArray[3] = true;
                                    std::cout << "Fast camel registered for the race." << std::endl;
                                } else {
                                    std::cerr << "[ERROR] This vehicle is already registered." << std::endl;
                                }
                                break;
                            case '5':
                                if (!checkArray[4]) {
                                    vehicleManager->addVehicle(broomFactory->createVehicle());
                                    checkArray[4] = true;
                                    std::cout << "Broom registered for the race." << std::endl;
                                } else {
                                    std::cerr << "[ERROR] This vehicle is already registered." << std::endl;
                                }
                                break;
                            case '6':
                                if (!checkArray[5]) {
                                    vehicleManager->addVehicle(eagleFactory->createVehicle());
                                    checkArray[5] = true;
                                    std::cout << "Eagle registered for the race." << std::endl;
                                } else {
                                    std::cerr << "[ERROR] This vehicle is already registered." << std::endl;
                                }
                                break;
                            case '7':
                                if (!checkArray[6]) {
                                    vehicleManager->addVehicle(carpetPlaneFactory->createVehicle());
                                    checkArray[6] = true;
                                    std::cout << "Carpet plane registered for the race." << std::endl;
                                } else {
                                    std::cerr << "[ERROR] This vehicle is already registered." << std::endl;
                                }
                                break;
                            case '0':
                                if (vehicleManager->getVehicleCount() < 2) {
                                    vehicleSelectionOutput(simulation->getRaceType(), simulation->getRaceTypeName());
                                } else {
                                    isRegistrationOver = true;
                                }
                                break;
                            default:
                                std::cerr << "[ERROR] Unrecognized input. Please, select valid vehicle or finish registration." << std::endl;
                                break;
                        }
                    } while (input < '0' || input > '7');
                }
        }

        simulation->simulate(distance, vehicleManager->getVehicles());

        std::cout << "Race result: " << std::endl;
        std::cout << simulation->printResult();

        vehicleManager->cleanup();

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
        delete [] checkArray;
    } while (restartInput != 'n');


    return 0;
}
