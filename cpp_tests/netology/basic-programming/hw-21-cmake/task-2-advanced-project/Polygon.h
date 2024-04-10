//
// Created by xussein on 3/10/2024.
//

#ifndef TASK_1_FIGURES_SIDES_POLYGON_H
#define TASK_1_FIGURES_SIDES_POLYGON_H


#include <string>

class Polygon {
protected:
    int sides_number;
    bool isValid;
    std::string name;
public:
    Polygon(int sides, std::string name);

    Polygon();

    virtual std::string getInfo();

    [[nodiscard]] int getSidesNumber() const;
};


#endif //TASK_1_FIGURES_SIDES_POLYGON_H
