#include "includes.h"

int main() {

    Polygon polygon;
    std::cout << polygon.getInfo() << std::endl;

    try {
        Triangle triangle(10, 20, 30, 50, 60, 70);
        std::cout << triangle.getInfo() << std::endl;
    } catch (PolygonConstructorException & e) {
        std::cout << e.what() << std::endl;
    }

    try {
        RightTriangle rightTriangle(30, 10, 30, 50, 90, 40);
        std::cout << rightTriangle.getInfo() << std::endl;
    } catch (PolygonConstructorException & e) {
        std::cout << e.what() << std::endl;
    }

    try {
        IsoscelesTriangle isoscelesTriangle(10, 20, 10, 50, 50, 60);
        std::cout << isoscelesTriangle.getInfo() << std::endl;
    } catch (PolygonConstructorException & e) {
        std::cout << e.what() << std::endl;
    }

    try {
        EquiliteralTriangle equiliteralTriangle(30, 30, 30, 60, 60, 60);
        std::cout << equiliteralTriangle.getInfo() << std::endl;
    } catch (PolygonConstructorException & e) {
        std::cout << e.what() << std::endl;
    }

    try {
        Quadrangle quadrangle(10, 20, 30 ,40, 50, 60, 70, 80);
        std::cout << quadrangle.getInfo() << std::endl;
    } catch (PolygonConstructorException & e) {
        std::cout << e.what() << std::endl;
    }

    try {
        Square square(20, 20, 20, 20, 90, 90, 90, 90);
        std::cout << square.getInfo() << std::endl;
    } catch (PolygonConstructorException & e) {
        std::cout << e.what() << std::endl;
    }

    try {
        Rectangle rectangle(10, 20, 10, 20, 90, 90, 90, 90);
        std::cout << rectangle.getInfo() << std::endl;
    } catch (PolygonConstructorException & e) {
        std::cout << e.what() << std::endl;
    }

    try {
        Parallelogram parallelogram(20, 30, 20, 30, 30, 130, 40, 160);
        std::cout << parallelogram.getInfo() << std::endl;
    } catch (PolygonConstructorException & e) {
        std::cout << e.what() << std::endl;
    }

    try {
        Rhombus rhombus(30, 30, 30, 30, 30, 40, 30, 40);
        std::cout << rhombus.getInfo() << std::endl;
    } catch (PolygonConstructorException & e) {
        std::cout << e.what() << std::endl;
    }

    system("pause");

    return 0;

}
