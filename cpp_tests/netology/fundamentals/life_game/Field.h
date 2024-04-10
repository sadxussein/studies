#ifndef LIFE_GAME_FIELD_H
#define LIFE_GAME_FIELD_H

#include <iostream>
#include <utility>
#include <vector>
#include <cstdlib>

#include "unistd.h"

#include "Cell.h"

class Field {
public:
    static Field & getInstance();

    void init(int rows, int cols);
    void show();
    void addLivingCell(int x, int y);
    void update();

    bool isStagnant;
    bool hasCells;

    Field(const Field &) = delete;
    Field operator = (const Field &) = delete;
private:
    int rows;
    int cols;
    int generation;
    int cellsAlive;
    std::string prevCellsConfiguration;
    std::string currCellsConfiguration;
    Cell **cells;

    Field();
    ~Field() = default;
};


#endif //LIFE_GAME_FIELD_H
