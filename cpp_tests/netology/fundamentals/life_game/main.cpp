#include "Game.h"

int main() {
    Game & game = Game::getInstance();

    int code = game.init();

    if (code == 1) {
        game.play();
    } else if (code == 101) {
        std::cerr << "Couldn't open input file!" << std::endl;
        return 101;
    }

    return 0;
}
