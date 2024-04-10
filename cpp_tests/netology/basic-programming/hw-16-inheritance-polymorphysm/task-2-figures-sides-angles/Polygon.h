//
// Created by xussein on 3/10/2024.
//

#ifndef TASK_1_FIGURES_SIDES_POLYGON_H
#define TASK_1_FIGURES_SIDES_POLYGON_H


#include <string>

class Polygon {
protected:
    int sides_number;
public:
    explicit Polygon(int sides);
    Polygon();
};

class Triangle : public Polygon {
private:
    int ab_len;
    int bc_len;
    int ca_len;
    int abc_angle;
    int bca_angle;
    int cab_angle;
    std::string name;
public:
    Triangle();
    Triangle(std::string name, int ab_len, int bc_len, int ca_len, int abc_angle, int bca_angle, int cab_angle);
    std::string getInfo();
};

class RightTriangle : public Triangle {
public:
    RightTriangle();
};

class IsoscelesTriangle : public Triangle {
public:
    IsoscelesTriangle();
};

class EquiliteralTriangle : public Triangle {
public:
    EquiliteralTriangle();
};

class Quadrangle : public Polygon {
    int ab_len;
    int bc_len;
    int cd_len;
    int da_len;
    int abc_angle;
    int bcd_angle;
    int cda_angle;
    int dab_angle;
    std::string name;
public:
    Quadrangle();
    Quadrangle(std::string name, int ab_len, int bc_len, int cd_len, int da_len, int abc_angle, int bcd_angle, int cda_angle, int dab_angle);
    std::string getInfo();
};

class Square : public Quadrangle {
public:
    Square();
};

class Rectangle : public Quadrangle {
public:
    Rectangle();
};

class Parallelogram : public Quadrangle {
public:
    Parallelogram();
};

class Rhombus : public Quadrangle {
public:
    Rhombus();
};


#endif //TASK_1_FIGURES_SIDES_POLYGON_H
