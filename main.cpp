#include <iostream>
#include "Board.h"
int main() {
    Board *board = Board::GetInstance();
    board->Initialize();
    board-> show();
    return 0;
}
