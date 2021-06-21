//
// Created by Nikita on 16.06.2021.
//

#include "King.h"

King::King(int row, int col, enum color color, char display) : Figure(row, col, color, display) {

}

King::King(const King &obj): Figure(obj) {

}

void King::move(int nextRow, int nextCol, std::vector<Figure *> &figures) {

}

void King::hit() {

}
