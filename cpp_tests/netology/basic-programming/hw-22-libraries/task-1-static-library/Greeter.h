#ifndef TASK_1_STATIC_LIBRARY_GREETER_H
#define TASK_1_STATIC_LIBRARY_GREETER_H


#include <string>

class Greeter {
private:
    std::string name;
public:
    Greeter(std::string name);

    void setName(std::string name);
    std::string getName();
};


#endif // TASK_1_STATIC_LIBRARY_GREETER_H
