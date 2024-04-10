//
// Created by xussein on 3/10/2024.
//

#ifndef TASK_1_FIGURES_SIDES_POLYGON_H
#define TASK_1_FIGURES_SIDES_POLYGON_H


class Polygon {
protected:
    int sides_number;
public:
    explicit Polygon(int sides);
    Polygon();
    [[nodiscard]] int getSides() const;
};

class Triangle : public Polygon {
public:
    Triangle();
};

class Quadrangle : public Polygon {
public:
    Quadrangle();
};


#endif //TASK_1_FIGURES_SIDES_POLYGON_H
