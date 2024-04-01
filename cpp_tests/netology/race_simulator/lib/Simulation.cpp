//
// Created by xussein on 3/30/2024.
//

#include "Simulation.h"


Simulation * Simulation::instance = nullptr;

Simulation * Simulation::getInstance() {
    if (!instance) {
        instance = new Simulation();
    }
    return instance;
}

void Simulation::init(float dist) {
    this->distance = dist;
}

void Simulation::getResult() {

}

// TODO: create register of objects to safely destroy them at the end of the program
// TODO: create destructor for Simulation