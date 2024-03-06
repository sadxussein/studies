#ifndef LIFE_GAME_GAME_H
#define LIFE_GAME_GAME_H

#include <iostream>
#include <fstream>

#include "Field.h"

class Game {
public:
    static Game & getInstance();

    int init();
    void play();

    Game(const Game &) = delete;
    Game operator = (const Game &) = delete;
private:
    Field * field;

    Game();
    ~Game() = default;
};


#endif //LIFE_GAME_GAME_H
