//
// Created by Nikita on 16.06.2021.
//

#include "Knight.h"

Knight::Knight(int row, int col, enum color color, char display) : Figure(row, col, color, display) {

}

Knight::Knight(const Knight &obj): Figure(obj) {

}

void Knight::move(int nextRow, int nextCol, std::vector<Figure *> &figures) {

}

void Knight::hit() {

}
