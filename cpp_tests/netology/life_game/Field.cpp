#include "Field.h"

Field::Field() {
    rows = cols = 0;
    cellsAlive = 0;
    generation = 1;
    currCellsConfiguration = "";
    prevCellsConfiguration = "";
    cells = nullptr;
    isStagnant = false;
    hasCells = false;
};

Field & Field::getInstance() {
    static Field instance;
    return instance;
}

void Field::init(int rows, int cols) {
    this->rows = rows;
    this->cols = cols;

    this->cells = new Cell * [rows];
    for (int i = 0; i < rows; i++) {
        this->cells[i] = new Cell[cols];
    }
}

void Field::show() {
    system("cls");

    for (int i = 0; i < this->rows; i++) {
        for (int j = 0; j < this->cols; j++) {
            if (this->cells[i][j].isAlive) {
                std::cout << "* ";
            } else {
                std::cout << "- ";
            }
        }
        std::cout << std::endl;
    }

    std::cout << "Generation: " << this->generation << ". Alive cells: " << this->cellsAlive << std::endl;
    this->generation ++;
}

void Field::addLivingCell(int x, int y) {
    this->cells[x][y].isAlive = true;
    this->hasCells = true;
}

void Field::update() {
    // consider moving dx and dy
    int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

    this->cellsAlive = 0;

    for (int x = 0; x < this->rows; x ++) {
        for (int y = 0; y < this->cols; y ++) {
            if (this->cells[x][y].isAlive) {
                // creating string of x/y coords to check if they are the same between generations to define if game is over
                // updating living cells counter and cell configuration string
                this->cellsAlive ++;
                this->currCellsConfiguration += std::to_string(x);
                this->currCellsConfiguration += std::to_string(y);
                // checking neighbors for living cell
                int neighborCounter = 0;
                for (int i = 0; i < 8; i ++) {
                    if (x + dx[i] >= 0 &&
                        y + dy[i] >= 0 &&
                        x + dx[i] < this->rows &&
                        y + dy[i] < this->cols &&
                        this->cells[x + dx[i]][y + dy[i]].isAlive) {
                        neighborCounter++;
                    }
                }
                if (neighborCounter > 3 || neighborCounter < 2) {
                    this->cells[x][y].willLive = false;
                } else {
                    this->cells[x][y].willLive = true;
                }
            } else {
                // checking neighbors for dead cell
                int neighborCounter = 0;
                for (int i = 0; i < 8; i ++) {
                    if (x + dx[i] >= 0 &&
                        y + dy[i] >= 0 &&
                        x + dx[i] < this->rows &&
                        y + dy[i] < this->cols &&
                        this->cells[x + dx[i]][y + dy[i]].isAlive) {
                        neighborCounter++;
                    }
                }
                if (neighborCounter == 3) {
                    this->cells[x][y].willLive = true;
                } else {
                    this->cells[x][y].willLive = false;
                }
            }
        }
    }

    // updating cells to new status based on their neighbors
    for (int x = 0; x < this->rows; x ++) {
        for (int y = 0; y < this->cols; y++) {
            if (this->cells[x][y].isAlive && !this->cells[x][y].willLive) {
                this->cells[x][y].isAlive = false;
            } else if (!this->cells[x][y].isAlive && this->cells[x][y].willLive) {
                this->cells[x][y].isAlive = true;
            }
        }
    }

    // checking if strings are the same. If they are - game is over
    if (this->prevCellsConfiguration == this->currCellsConfiguration) {
        this->isStagnant = true;
    } else if (this->cellsAlive == 0) {
        this->hasCells = false;
    } else {
        this->prevCellsConfiguration = this->currCellsConfiguration;
        this->currCellsConfiguration = "";
    }

    sleep(1);
}