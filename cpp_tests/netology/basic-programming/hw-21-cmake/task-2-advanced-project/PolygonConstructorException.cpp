//
// Created by xussein on 3/23/2024.
//

#include "PolygonConstructorException.h"

const char *PolygonConstructorException::what() const noexcept {
    static std::string result;
    result = "Polygon creation error. Reason: ";
    result += this->errorMessage;
    return result.c_str();
}
