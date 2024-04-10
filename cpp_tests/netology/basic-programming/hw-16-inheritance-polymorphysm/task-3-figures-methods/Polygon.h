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

    int getSidesNumber() const;
};

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

class RightTriangle : public Triangle {
public:
    RightTriangle(double ab_len, double bc_len, double ca_len, double abc_angle, double bca_angle, double cab_angle);
};

class IsoscelesTriangle : public Triangle {
public:
    IsoscelesTriangle(double ab_len, double bc_len, double ca_len, double abc_angle, double bca_angle,
                      double cab_angle);
};

class EquiliteralTriangle : public Triangle {
public:
    EquiliteralTriangle(double ab_len, double bc_len, double ca_len, double abc_angle, double bca_angle,
                        double cab_angle);
};

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

class Square : public Quadrangle {
public:
    Square(double ab_len, double bc_len, double cd_len, double da_len, double abc_angle,
           double bcd_angle, double cda_angle, double dab_angle);
};

class Rectangle : public Quadrangle {
public:
    Rectangle(double ab_len, double bc_len, double cd_len, double da_len, double abc_angle,
              double bcd_angle, double cda_angle, double dab_angle);
};

class Parallelogram : public Quadrangle {
public:
    Parallelogram(double ab_len, double bc_len, double cd_len, double da_len, double abc_angle,
                  double bcd_angle, double cda_angle, double dab_angle);
};

class Rhombus : public Quadrangle {
public:
    Rhombus(double ab_len, double bc_len, double cd_len, double da_len, double abc_angle,
            double bcd_angle, double cda_angle, double dab_angle);
};


#endif //TASK_1_FIGURES_SIDES_POLYGON_H
