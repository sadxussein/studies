//
// Created by user on 3/11/2024.
//

#ifndef TASK_3_FIGURES_METHODS_EQUILITERALTRIANGLE_H
#define TASK_3_FIGURES_METHODS_EQUILITERALTRIANGLE_H


#include "../Triangle.h"
#include "../PolygonConstructorException.h"

class EquiliteralTriangle : public Triangle {
public:
    EquiliteralTriangle(double ab_len, double bc_len, double ca_len, double abc_angle, double bca_angle,
                        double cab_angle);
};


#endif //TASK_3_FIGURES_METHODS_EQUILITERALTRIANGLE_H
