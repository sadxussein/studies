//
// Created by xussein on 3/10/2024.
//

#include "Polygon.h"

#include <utility>

Polygon::Polygon(int sides) : sides_number(sides) {}

Polygon::Polygon() : sides_number(0) {}

// Triangles
Triangle::Triangle() : name("Triangle"), ab_len(10), bc_len(20), ca_len(30), abc_angle(50), bca_angle(60), cab_angle(70) {}

Triangle::Triangle(std::string name, int ab_len, int bc_len, int ca_len, int abc_angle, int bca_angle, int cab_angle) :
    Polygon(3), name(std::move(name)), ab_len(ab_len), bc_len(bc_len), ca_len(ca_len), abc_angle(abc_angle), bca_angle(bca_angle), cab_angle(cab_angle) {}

std::string Triangle::getInfo() {
     return name + ":\nSides: ab=" + std::to_string(ab_len) + " bc=" + std::to_string(bc_len) + " ca=" + std::to_string(ca_len) +
        "\nAngles: " + "abc=" + std::to_string(abc_angle) + " bca=" + std::to_string(bca_angle) + " cab=" + std::to_string(cab_angle) + "\n";
}

RightTriangle::RightTriangle() : Triangle("Right triangle", 10, 20, 30, 50, 90, 60) {}

IsoscelesTriangle::IsoscelesTriangle() : Triangle("Isosceles triangle", 10, 20, 10, 50, 60, 50) {}

EquiliteralTriangle::EquiliteralTriangle() : Triangle("Equiliteral triangle", 30, 30, 30, 60, 60, 60) {}

// Quadrangles
Quadrangle::Quadrangle() : name("Quadrangle"), ab_len(10), bc_len(20), cd_len(30), da_len(40), abc_angle(50), bcd_angle(60), cda_angle(70),dab_angle(80) {}

Quadrangle::Quadrangle(std::string name, int ab_len, int bc_len, int cd_len, int da_len, int abc_angle, int bcd_angle, int cda_angle, int dab_angle) :
    Polygon(4), name(std::move(name)), ab_len(ab_len), bc_len(bc_len), cd_len(cd_len), da_len(da_len), abc_angle(abc_angle), bcd_angle(bcd_angle), cda_angle(cda_angle),dab_angle(dab_angle) {}

std::string Quadrangle::getInfo() {
    return name + ":\nSides: ab=" + std::to_string(ab_len) + " bc=" + std::to_string(bc_len) + " cd=" + std::to_string(cd_len) + " da=" + std::to_string(da_len) +
           "\nAngles: " + "abc=" + std::to_string(abc_angle) + " bcd=" + std::to_string(bcd_angle) + " cda=" + std::to_string(cda_angle) + " dab=" + std::to_string(dab_angle) + "\n";
}

Square::Square() : Quadrangle("Square", 20, 20, 20, 20, 90, 90, 90, 90){}

Rectangle::Rectangle() : Quadrangle("Rectangle", 10, 20, 10, 20, 90, 90, 90, 90) {}

Parallelogram::Parallelogram() : Quadrangle("Parallelogram", 20, 30, 20, 30, 30, 40, 30, 40) {}

Rhombus::Rhombus(): Quadrangle("Rhombus", 30, 30, 30, 30, 30, 40, 30, 40) {}
