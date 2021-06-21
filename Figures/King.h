//
// Created by Nikita on 16.06.2021.
//

#ifndef CHESS_KING_H
#define CHESS_KING_H


#include "Figure.h"

class King: public Figure {
public:
    King(int row, int col, enum color color, char display);
    King(const King &obj);
    void move(int nextRow, int nextCol, std::vector<Figure *> &figures) override;
    void hit() override;
};


#endif //CHESS_KING_H
