//
// Created by xussein on 3/23/2024.
//

#ifndef TASK_2_CONSTRUCTOR_EXCEPTION_POLYGONCONSTRUCTOREXCEPTION_H
#define TASK_2_CONSTRUCTOR_EXCEPTION_POLYGONCONSTRUCTOREXCEPTION_H

#include <exception>

class PolygonConstructorException : public std::exception {
public:
    [[nodiscard]] const char * what() const noexcept override;
};


#endif //TASK_2_CONSTRUCTOR_EXCEPTION_POLYGONCONSTRUCTOREXCEPTION_H
