//
// Created by Nikita on 16.06.2021.
//

#ifndef CHESS_BISHOP_H
#define CHESS_BISHOP_H


#include "Figure.h"

class Bishop: public Figure {
public:
    Bishop(int row, int col, enum color color, char display);
    Bishop(const Bishop &obj);
    void move(int nextRow, int nextCol, std::vector<Figure *> &figures) override;
    void hit() override;
};


#endif //CHESS_BISHOP_H
