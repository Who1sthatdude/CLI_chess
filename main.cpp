#include <iostream>
#include "Board.h"
int main() {
    Board *board = Board::GetInstance();
    board->Initialize();
    board->makeBuffer();
    board->printBuffer();
    return 0;
}
