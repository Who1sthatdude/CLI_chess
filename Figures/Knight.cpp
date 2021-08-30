//
// Created by Nikita on 16.06.2021.
//

#include "Knight.h"

Knight::Knight(int row, int col, enum color color, char display) : Figure(row, col, color, display) {

}

Knight::Knight(const Knight &obj) : Figure(obj) {

}

void Knight::move(int nextRow, int nextCol, std::vector<Figure *> &figures) {
    int vertical = abs(nextRow - getRow());
    int horizontal = abs(nextCol - getCol());
    if ((abs(vertical - horizontal) == 1) && (vertical <= 2 && horizontal <= 2)) {
        int index = findFigureIndex(nextRow, nextCol, figures);
        if (index != -1) {
            figures.at(index)->getColor() != getColor() ? figures.erase(figures.begin() + index)
                                                        : throw WrongMoveException(
                    "There is ally figure blocking the Knight");
        }
        setRow(nextRow);
        setCol(nextCol);
        return;
    }
    throw WrongMoveException("Knight(Horse) cannot make such move");
}

void Knight::hit() {

}
