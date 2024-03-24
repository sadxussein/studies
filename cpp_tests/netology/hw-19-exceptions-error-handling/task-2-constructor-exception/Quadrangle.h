//
// Created by user on 3/11/2024.
//

#ifndef TASK_3_FIGURES_METHODS_QUADRANGLE_H
#define TASK_3_FIGURES_METHODS_QUADRANGLE_H


#include "Polygon.h"
#include "PolygonConstructorException.h"

class Quadrangle : public Polygon {
protected:
    double ab_len;
    double bc_len;
    double cd_len;
    double da_len;
    double abc_angle;
    double bcd_angle;
    double cda_angle;
    double dab_angle;
public:
    Quadrangle(double ab_len, double bc_len, double cd_len, double da_len, double abc_angle,
               double bcd_angle, double cda_angle, double dab_angle);

    std::string getInfo() override;
};


#endif //TASK_3_FIGURES_METHODS_QUADRANGLE_H
