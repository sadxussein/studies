//
// Created by xussein on 3/30/2024.
//

#ifndef LIB_SIMULATION_H
#define LIB_SIMULATION_H


class Simulation {
public:
    static Simulation * instance;
    static Simulation * getInstance();
    void init(float dist);
    void getResult();
private:
    Simulation() = default;
    float distance;
};


#endif //LIB_SIMULATION_H
