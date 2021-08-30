//
// Created by Nikita on 16.06.2021.
//

#ifndef CHESS_KNIGHT_H
#define CHESS_KNIGHT_H


#include "Figure.h"
#include "../utils.h"
#include "../Exceptions/WrongMoveException.h"

class Knight: public Figure {
public:
    Knight(int row, int col, enum color color, char display);
    Knight(const Knight &obj);
    void move(int nextRow, int nextCol, std::vector<Figure *> &figures) override;
    void hit() override;
};


#endif //CHESS_KNIGHT_H
