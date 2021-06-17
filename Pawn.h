//
// Created by Nikita on 16.06.2021.
//

#ifndef CHESS_PAWN_H
#define CHESS_PAWN_H


#include "Figure.h"

class Pawn: public Figure {
public:
    Pawn(int row, int col, enum color color, char display);
    Pawn(const Pawn &obj);
    void move() override;
    void hit() override;
};


#endif //CHESS_PAWN_H
