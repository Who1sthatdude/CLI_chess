//
// Created by Nikita on 16.06.2021.
//

#ifndef CHESS_QUEEN_H
#define CHESS_QUEEN_H


#include "Figure.h"

class Queen: public Figure {
public:
    Queen(int row, int col, enum color color, char display);
    Queen(const Queen &obj);
    void move(int nextRow, int nextCol, std::vector<Figure *> &figures) override;
    void hit() override;
};


#endif //CHESS_QUEEN_H
