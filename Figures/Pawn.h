//
// Created by Nikita on 16.06.2021.
//

#ifndef CHESS_PAWN_H
#define CHESS_PAWN_H


#include "Figure.h"
#include "../utils.h"
#include "../Exceptions/WrongMoveException.h"

class Pawn: public Figure {
    bool isFirstMove = true;
public:
    Pawn(int row, int col, enum color color, char display);
    Pawn(const Pawn &obj);
    void move(int nextRow, int nextCol, std::vector<Figure *> &figures) override;
    void hit() override;
};


#endif //CHESS_PAWN_H
