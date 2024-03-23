//
// Created by xussein on 3/23/2024.
//

#include "PolygonConstructorException.h"

const char *PolygonConstructorException::what() const noexcept {
        return "Polygon creation error. Reason: ";
}
