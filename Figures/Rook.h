//
// Created by Nikita on 16.06.2021.
//

#ifndef CHESS_ROOK_H
#define CHESS_ROOK_H


#include "Figure.h"

class Rook: public Figure {
public:
    Rook(int row, int col, enum color color, char display);
    Rook(const Rook &obj);
    void move(int nextRow, int nextCol, std::vector<Figure *> &figures) override;
    void hit() override;
};


#endif //CHESS_ROOK_H
