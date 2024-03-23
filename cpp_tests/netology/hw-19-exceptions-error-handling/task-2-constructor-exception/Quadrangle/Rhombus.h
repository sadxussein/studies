//
// Created by user on 3/11/2024.
//

#ifndef TASK_3_FIGURES_METHODS_RHOMBUS_H
#define TASK_3_FIGURES_METHODS_RHOMBUS_H


#include "../Quadrangle.h"

class Rhombus : public Quadrangle {
public:
    Rhombus(double ab_len, double bc_len, double cd_len, double da_len, double abc_angle,
            double bcd_angle, double cda_angle, double dab_angle);
};


#endif //TASK_3_FIGURES_METHODS_RHOMBUS_H
