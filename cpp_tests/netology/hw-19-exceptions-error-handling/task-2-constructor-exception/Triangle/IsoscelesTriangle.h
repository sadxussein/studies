//
// Created by user on 3/11/2024.
//

#ifndef TASK_3_FIGURES_METHODS_ISOSCELESTRIANGLE_H
#define TASK_3_FIGURES_METHODS_ISOSCELESTRIANGLE_H


#include "../Triangle.h"
#include "../PolygonConstructorException.h"

class IsoscelesTriangle : public Triangle {
public:
    IsoscelesTriangle(double ab_len, double bc_len, double ca_len, double abc_angle, double bca_angle,
                      double cab_angle);
};


#endif //TASK_3_FIGURES_METHODS_ISOSCELESTRIANGLE_H
