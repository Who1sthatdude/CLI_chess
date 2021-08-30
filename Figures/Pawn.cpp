//
// Created by Nikita on 16.06.2021.
//

#include "Pawn.h"

Pawn::Pawn(int row, int col, enum color color, char display) : Figure(row, col, color, display) {

}

Pawn::Pawn(const Pawn &obj) : Figure(obj) {

}

void Pawn::move(int nextRow, int nextCol, std::vector<Figure *> &figures) {
    int diminished = getColor() == WHITE ? nextRow : getRow();
    int subtrahend = getColor() == WHITE ? getRow() : nextRow;
    int difference = isFirstMove ? 2 : 1;
    if (getCol() == nextCol) {
        if ((diminished - subtrahend > 0) && (diminished - subtrahend <= difference)) {
            int index = findFigureIndex(nextRow, nextCol, figures);
            int index2 = diminished - subtrahend == 2 ? findFigureIndex(diminished - 1, nextCol, figures) : -1;
            if (index == -1 && index2 == -1) {
                setRow(nextRow);
                setCol(nextCol);
                isFirstMove = false;
                return;
            }
        }
    } else if (abs(getCol() - nextCol) == 1) {
        int index = findFigureIndex(nextRow, nextCol, figures);
        if (diminished - subtrahend == 1 && figures[index]->getColor() != getColor()){
            setRow(nextRow);
            setCol(nextCol);
            figures.erase(figures.begin() + index);
            isFirstMove = false;
            return;
        }
    }
    throw WrongMoveException("Pawn cannot make such move");
}

void Pawn::hit() {

}
