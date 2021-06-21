//
// Created by Nikita on 21.06.2021.
//
#include "utils.h"

int findFigureIndex(int row, int col, std::vector<Figure *> &figures) {
    auto iter = std::find_if(figures.begin(), figures.end(),
                     [row, col](Figure *obj) { return (obj->getRow() == row) && (obj->getCol() == col); });
    return iter != figures.end() ? std::distance(figures.begin(), iter) : -1;
}