//
// Created by xussein on 3/6/2024.
//

#ifndef TASK_2_COUNTER_COUNTER_H
#define TASK_2_COUNTER_COUNTER_H


class Counter {
public:
    Counter();
    Counter(int num);

    void increment();
    void decrement();
    [[nodiscard]] int show() const;
private:
    int num;
};


#endif //TASK_2_COUNTER_COUNTER_H
