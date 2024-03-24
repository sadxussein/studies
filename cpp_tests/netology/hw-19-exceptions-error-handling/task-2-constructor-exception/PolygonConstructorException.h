//
// Created by xussein on 3/23/2024.
//

#ifndef TASK_2_CONSTRUCTOR_EXCEPTION_POLYGONCONSTRUCTOREXCEPTION_H
#define TASK_2_CONSTRUCTOR_EXCEPTION_POLYGONCONSTRUCTOREXCEPTION_H


#include <exception>
#include <string>
#include <utility>

class PolygonConstructorException : public std::exception {
private:
    std::string errorMessage;
public:
    explicit PolygonConstructorException(std::string message) : errorMessage(std::move(message)) {}
    [[nodiscard]] const char * what() const noexcept override;
};


#endif //TASK_2_CONSTRUCTOR_EXCEPTION_POLYGONCONSTRUCTOREXCEPTION_H
