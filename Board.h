//
// Created by Nikita on 16.06.2021.
//

#ifndef CHESS_BOARD_H
#define CHESS_BOARD_H

#include "Figures/Figure.h"
#include <vector>

class Board {
private:
    unsigned int movesCounter = 0;
    static Board *instance;
    std::vector<Figure *> figures;
    Board();
    char buffer[8][8];
public:
    static Board *GetInstance();
    void printBuffer();
    void makeBuffer();
    void show();
    void Initialize();
    void makeMove(int prevRow, int prevCol, int nextRow, int nextCol);
    void AddFigure(Figure *obj);
    void DeleteFigure();
    Board(const Board &obj) = delete;
    void operator=(const Board &) = delete;
};


#endif //CHESS_BOARD_H
