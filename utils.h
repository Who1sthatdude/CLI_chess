//
// Created by Nikita on 21.06.2021.
//
#ifndef CHESS_UTILS_H
#define CHESS_UTILS_H

#include <string>
#include <vector>
#include <algorithm>
#include "Figures/Figure.h"

int findFigureIndex(int row, int col, std::vector<Figure *> &figures);

#endif //CHESS_UTILS_H
