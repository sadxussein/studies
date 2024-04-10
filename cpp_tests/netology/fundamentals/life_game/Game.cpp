#include "Game.h"

Game::Game() {
    field = &Field::getInstance();
}

Game & Game::getInstance() {
    static Game instance;
    return instance;
}

int Game::init() {
    std::ifstream input_file;
    input_file.open("input.txt");

    if (input_file.is_open()) {
        int rows, cols;
        input_file >> rows >> cols;

        field->init(rows, cols);

        int cell_x, cell_y;
        while (!input_file.eof()) {
            input_file >> cell_x >> cell_y;
            field->addLivingCell(cell_x, cell_y);
        }

        input_file.close();

        return 1;       // ok init code
    } else {
        return 101;     // error init code
    }
}

void Game::play() {
    field->show();

    while (field->hasCells && !field->isStagnant) {
        field->update();
        field->show();
    }

    if (field->isStagnant) {
        std::cout << "The world has stagnated. Game over." << std::endl;
    } else if (!field->hasCells) {
        std::cout << "All cells are dead. Game over." << std::endl;
    }

    system("pause");
}