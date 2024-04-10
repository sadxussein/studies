//
// Created by xussein on 3/6/2024.
//

#ifndef TASK_1_CALCULATOR_H
#define TASK_1_CALCULATOR_H


class Calculator {
public:
    Calculator() = default;
    ~Calculator() = default;

    [[nodiscard]] double add() const;
    [[nodiscard]] double multiply() const;
    [[nodiscard]] double substract_1_2() const;
    [[nodiscard]] double substract_2_1() const;
    [[nodiscard]] double divide_1_2() const;
    [[nodiscard]] double divide_2_1() const;
    bool set_num1(double num1);
    bool set_num2(double num2);
private:
    double num1;
    double num2;
};


#endif //TASK_1_CALCULATOR_H
