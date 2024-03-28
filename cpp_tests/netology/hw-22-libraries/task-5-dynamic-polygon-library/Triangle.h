//
// Created by user on 3/11/2024.
//

#ifndef TASK_3_FIGURES_METHODS_TRIANGLE_H
#define TASK_3_FIGURES_METHODS_TRIANGLE_H

#include <iostream>

#include "Polygon.h"
#include "PolygonConstructorException.h"

class Triangle : public Polygon {
protected:
    double ab_len;
    double bc_len;
    double ca_len;
    double abc_angle;
    double bca_angle;
    double cab_angle;
public:
    Triangle(double ab_len, double bc_len, double ca_len, double abc_angle, double bca_angle, double cab_angle);

    std::string getInfo() override;
};


#endif //TASK_3_FIGURES_METHODS_TRIANGLE_H
