//
// Created by Nikita on 16.06.2021.
//

#ifndef CHESS_KNIGHT_H
#define CHESS_KNIGHT_H


#include "Figure.h"

class Knight: public Figure {
public:
    Knight(int row, int col, enum color color, char display);
    Knight(const Knight &obj);
    void move() override;
    void hit() override;
};


#endif //CHESS_KNIGHT_H
