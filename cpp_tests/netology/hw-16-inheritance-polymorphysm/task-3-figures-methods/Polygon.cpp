//
// Created by xussein on 3/10/2024.
//

#include "Polygon.h"

#include <utility>

Polygon::Polygon(int sides, std::string name) : sides_number(sides), name(std::move(name)), isValid(true) {}

Polygon::Polygon() : sides_number(0), name("Polygon"), isValid(true) {}

std::string Polygon::getInfo() {
    return name + (isValid ? ":\nValid\n" : ":\nInvalid\n") + "Sides number: " + std::to_string(getSidesNumber()) +
           "\n";
}

int Polygon::getSidesNumber() const {
    return sides_number;
}

// Triangles
Triangle::Triangle(double ab_len, double bc_len, double ca_len, double abc_angle, double bca_angle, double cab_angle) :
        Polygon(3, "Triangle"), ab_len(ab_len), bc_len(bc_len), ca_len(ca_len), abc_angle(abc_angle),
        bca_angle(bca_angle), cab_angle(cab_angle) {
    if ((abc_angle + bca_angle + cab_angle) != 180) {
        isValid = false;
    }
}

std::string Triangle::getInfo() {
    return name + (isValid ? ":\nValid\n" : ":\nInvalid\n") + "Sides number: " + std::to_string(getSidesNumber()) +
           "\nSides: ab=" + std::to_string(ab_len) + " bc=" +
           std::to_string(bc_len) + " ca=" + std::to_string(ca_len) + "\nAngles: " + "abc=" +
           std::to_string(abc_angle) + " bca=" + std::to_string(bca_angle) + " cab=" +
           std::to_string(cab_angle) + "\n";
}

RightTriangle::RightTriangle(double ab_len, double bc_len, double ca_len, double abc_angle, double bca_angle,
                             double cab_angle) : Triangle(ab_len, bc_len, ca_len, abc_angle, bca_angle, cab_angle) {
    name = "RightTriangle";
    if (bca_angle != 90) {
        isValid = false;
    }
}

IsoscelesTriangle::IsoscelesTriangle(double ab_len, double bc_len, double ca_len, double abc_angle, double bca_angle,
                                     double cab_angle) : Triangle(ab_len, bc_len, ca_len, abc_angle, bca_angle,
                                                                  cab_angle) {
    name = "IsoscelesTriangle";
    if (bca_angle != cab_angle || ab_len != bc_len) {
        isValid = false;
    }
}

EquiliteralTriangle::EquiliteralTriangle(double ab_len, double bc_len, double ca_len, double abc_angle,
                                         double bca_angle,
                                         double cab_angle) : Triangle(ab_len, bc_len, ca_len, abc_angle, bca_angle,
                                                                      cab_angle) {
    name = "EquiliteralTriangle";
    if (bca_angle != cab_angle || bca_angle != abc_angle || ab_len != bc_len || ab_len != ca_len) {
        isValid = false;
    }
}

// Quadrangles
Quadrangle::Quadrangle(double ab_len, double bc_len, double cd_len, double da_len, double abc_angle, double bcd_angle,
                       double cda_angle, double dab_angle) :
        Polygon(4, "Quadrangle"), ab_len(ab_len), bc_len(bc_len), cd_len(cd_len), da_len(da_len),
        abc_angle(abc_angle), bcd_angle(bcd_angle), cda_angle(cda_angle), dab_angle(dab_angle) {
    if (abc_angle + bcd_angle + cda_angle + dab_angle != 360) {
        isValid = false;
    }
}

std::string Quadrangle::getInfo() {
    return name + (isValid ? ":\nValid\n" : ":\nInvalid\n") + "Sides number: " + std::to_string(getSidesNumber()) +
           "\nSides: ab=" + std::to_string(ab_len) + " bc=" +
           std::to_string(bc_len) + " cd=" + std::to_string(cd_len) + " da=" + std::to_string(da_len) +
           "\nAngles: " + "abc=" + std::to_string(abc_angle) + " bcd=" + std::to_string(bcd_angle) + " cda=" +
           std::to_string(cda_angle) + " dab=" + std::to_string(dab_angle) + "\n";
}

Square::Square(double ab_len, double bc_len, double cd_len, double da_len, double abc_angle, double bcd_angle,
               double cda_angle, double dab_angle) : Quadrangle(ab_len, bc_len, cd_len, da_len, abc_angle, bcd_angle,
                                                                cda_angle, dab_angle) {
    name = "Square";
    if (abc_angle != bcd_angle || abc_angle != cda_angle || abc_angle != dab_angle || ab_len != bc_len ||
        ab_len != cd_len || ab_len != da_len) {
        isValid = false;
    }
}

Rectangle::Rectangle(double ab_len, double bc_len, double cd_len, double da_len, double abc_angle, double bcd_angle,
                     double cda_angle, double dab_angle) : Quadrangle(ab_len, bc_len, cd_len, da_len, abc_angle,
                                                                      bcd_angle, cda_angle, dab_angle) {
    name = "Rectangle";
    if (abc_angle != bcd_angle || abc_angle != cda_angle || abc_angle != dab_angle || ab_len != cd_len ||
        bc_len != da_len) {
        isValid = false;
    }
}

Parallelogram::Parallelogram(double ab_len, double bc_len, double cd_len, double da_len, double abc_angle,
                             double bcd_angle, double cda_angle, double dab_angle) : Quadrangle(ab_len, bc_len, cd_len,
                                                                                                da_len, abc_angle,
                                                                                                bcd_angle, cda_angle,
                                                                                                dab_angle) {
    name = "Parallelogram";
    if (abc_angle != cda_angle || bcd_angle != dab_angle || ab_len != cd_len || bc_len != da_len) {
        isValid = false;
    }
}

Rhombus::Rhombus(double ab_len, double bc_len, double cd_len, double da_len, double abc_angle, double bcd_angle,
                 double cda_angle, double dab_angle) : Quadrangle(ab_len, bc_len, cd_len, da_len, abc_angle, bcd_angle,
                                                                  cda_angle, dab_angle) {
    name = "Rhombus";
    if (ab_len != bc_len || ab_len != cd_len || ab_len != da_len) {
        isValid = false;
    }
}
