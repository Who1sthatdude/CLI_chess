//
// Created by Nikita on 16.06.2021.
//

#ifndef CHESS_BOARD_H
#define CHESS_BOARD_H


#include "Figure.h"
#include <vector>

class Board {
private:
    static Board* instance;
    std::vector<Figure> figures;
    Board();
public:
    Board* GetInstance();
    void Initialize();
    void AddFigure(const Figure &obj);
    void DeleteFigure();
    Board(const Board &obj) = delete;
    void operator = (const Board &) = delete;
};


#endif //CHESS_BOARD_H
