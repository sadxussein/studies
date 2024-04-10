//
// Created by user on 3/11/2024.
//

#ifndef TASK_3_FIGURES_METHODS_SQUARE_H
#define TASK_3_FIGURES_METHODS_SQUARE_H


#include "../Quadrangle.h"
#include "../PolygonConstructorException.h"

class Square : public Quadrangle {
public:
    Square(double ab_len, double bc_len, double cd_len, double da_len, double abc_angle,
           double bcd_angle, double cda_angle, double dab_angle);
};

#endif //TASK_3_FIGURES_METHODS_SQUARE_H
