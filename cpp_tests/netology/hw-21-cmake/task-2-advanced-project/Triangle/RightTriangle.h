//
// Created by user on 3/11/2024.
//

#ifndef TASK_3_FIGURES_METHODS_RIGHTTRIANGLE_H
#define TASK_3_FIGURES_METHODS_RIGHTTRIANGLE_H


#include "../Triangle.h"
#include "../PolygonConstructorException.h"

class RightTriangle : public Triangle {
public:
    RightTriangle(double ab_len, double bc_len, double ca_len, double abc_angle, double bca_angle, double cab_angle);
};


#endif //TASK_3_FIGURES_METHODS_RIGHTTRIANGLE_H
