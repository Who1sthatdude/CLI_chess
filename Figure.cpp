//
// Created by Nikita on 11.06.2021.
//

#include "Figure.h"

Figure::Figure() {
    this->row = 0;
    this->col = 0;
    this->color = WHITE;
}

int Figure::getX() {
    return this->row;
}

int Figure::getY() {
    return this->col;
}

void Figure::setRow(int row) {
    this->row = row;
}

void Figure::setCol(int col) {
    this->col = col;
}

enum color Figure::getColor() {
    return this->color;
}

Figure::Figure(const Figure &obj) {
    this->row = obj.row;
    this->col = obj.col;
    this->color = obj.color;
}

Figure::Figure(int row, int col, enum color color) {
    this->row = row;
    this->col = col;
    this->color = color;
}
