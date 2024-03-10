#include <iostream>

#include "Polygon.h"

int main() {
    Triangle triangle;
    RightTriangle rightTriangle;
    IsoscelesTriangle isoscelesTriangle;
    EquiliteralTriangle equiliteralTriangle;
    Quadrangle quadrangle;
    Square square;
    Rectangle rectangle;
    Parallelogram parallelogram;
    Rhombus rhombus;

    std::cout << triangle.getInfo() << std::endl;
    std::cout << rightTriangle.getInfo() << std::endl;
    std::cout << isoscelesTriangle.getInfo() << std::endl;
    std::cout << equiliteralTriangle.getInfo() << std::endl;
    std::cout << quadrangle.getInfo() << std::endl;
    std::cout << square.getInfo() << std::endl;
    std::cout << rectangle.getInfo() << std::endl;
    std::cout << parallelogram.getInfo() << std::endl;
    std::cout << rhombus.getInfo() << std::endl;
    return 0;
}
