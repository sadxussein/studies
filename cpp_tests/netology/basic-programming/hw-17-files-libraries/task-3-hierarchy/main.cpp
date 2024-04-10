#include <iostream>

#include "includes.h"

int main() {
    Polygon polygon;
    Triangle triangle(10, 20, 30, 50, 60, 70);
    RightTriangle rightTriangle1(10, 20, 30, 50, 70, 60);
    RightTriangle rightTriangle2(30, 10, 30, 50, 90, 40);
    IsoscelesTriangle isoscelesTriangle(10, 20, 10, 50, 50, 60);
    EquiliteralTriangle equiliteralTriangle(30, 30, 30, 60, 60, 60);
    Quadrangle quadrangle(10, 20, 30 ,40, 50, 60, 70, 80);
    Square square(20, 20, 20, 20, 90, 90, 90, 90);
    Rectangle rectangle(10, 20, 10, 20, 90, 90, 90, 90);
    Parallelogram parallelogram(20, 30, 20, 30, 30, 40, 30, 40);
    Rhombus rhombus(30, 30, 30, 30, 30, 40, 30, 40);

    std::cout << polygon.getInfo() << std::endl;
    std::cout << triangle.getInfo() << std::endl;
    std::cout << rightTriangle1.getInfo() << std::endl;
    std::cout << rightTriangle2.getInfo() << std::endl;
    std::cout << isoscelesTriangle.getInfo() << std::endl;
    std::cout << equiliteralTriangle.getInfo() << std::endl;
    std::cout << quadrangle.getInfo() << std::endl;
    std::cout << square.getInfo() << std::endl;
    std::cout << rectangle.getInfo() << std::endl;
    std::cout << parallelogram.getInfo() << std::endl;
    std::cout << rhombus.getInfo() << std::endl;
    return 0;
}
