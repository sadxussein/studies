#ifndef TASK_1_STATIC_LIBRARY_Leaver_H
#define TASK_1_STATIC_LIBRARY_Leaver_H


#include <string>

class Leaver {
private:
    std::string name;
public:
    Leaver(std::string name);

    void setName(std::string name);
    std::string getName();
};


#endif // TASK_1_STATIC_LIBRARY_Leaver_H
