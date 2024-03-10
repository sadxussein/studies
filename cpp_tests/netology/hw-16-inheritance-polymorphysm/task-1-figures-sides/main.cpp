#include <iostream>

#include "Polygon.h"

int main() {
    Polygon polygon;
    Triangle triangle;
    Quadrangle square;
    std::cout << "Polygon: " << polygon.getSides() << std::endl;
    std::cout << "Triangle: " << triangle.getSides() << std::endl;
    std::cout << "Quadrangle: " << square.getSides() << std::endl;
    return 0;
}
