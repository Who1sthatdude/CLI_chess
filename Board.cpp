//
// Created by Nikita on 16.06.2021.
//

#include "Board.h"
#include "Pawn.h"
#include "Rook.h"
#include "Knight.h"
#include "King.h"
#include "Bishop.h"
#include "Queen.h"
#include <vector>
#include <algorithm>
#include <iostream>

Board *Board::instance = nullptr;

Board *Board::GetInstance() {
    if (!instance) {
        instance = new Board();
    }
    return instance;
}

Board::Board() {

}

void Board::Initialize() {
    for (int i = 0; i < 16; i++) {
        AddFigure(new Pawn(1, i, WHITE, 'P'));
        if (i >= 8) {
            AddFigure(new Pawn(6, i - 8, BLACK, 'p'));
        }
    }
    AddFigure(new Rook(0, 0, WHITE, 'R'));
    AddFigure(new Rook(0, 7, WHITE, 'R'));
    AddFigure(new Rook(7, 0, BLACK, 'r'));
    AddFigure(new Rook(7, 7, BLACK, 'r'));
    AddFigure(new Knight(0, 1, WHITE, 'H'));
    AddFigure(new Knight(0, 6, WHITE, 'H'));
    AddFigure(new Knight(7, 1, BLACK, 'h'));
    AddFigure(new Knight(7, 6, BLACK, 'h'));
    AddFigure(new Bishop(0, 2, WHITE, 'B'));
    AddFigure(new Bishop(0, 5, WHITE, 'B'));
    AddFigure(new Bishop(7, 2, BLACK, 'b'));
    AddFigure(new Bishop(7, 5, BLACK, 'b'));
    AddFigure(new Queen(0, 3, WHITE, 'Q'));
    AddFigure(new Queen(7, 3, BLACK, 'q'));
    AddFigure(new King(0, 4, WHITE, 'K'));
    AddFigure(new King(7, 4, BLACK, 'k'));
}

void Board::AddFigure(Figure *obj) {
    figures.push_back(obj);
}

void Board::makeBuffer() {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            auto iter = std::find_if(figures.begin(), figures.end(),
                                     [i, j](Figure *obj) { return (obj->getRow() == i) && (obj->getCol() == j); });
            if (iter != figures.end()){
                auto index = std::distance(figures.begin(), iter);
                buffer[i][j] = figures.at(index)->getDisplay();
            }else {
                buffer[i][j] = '.';
            }
        }
    }
}

void Board::printBuffer() {
    for(auto & i : buffer){
        for(char j : i){
            std::cout<<j<<" ";
        }
        std::cout<<std::endl;
    }
}

void Board::show() {
    makeBuffer();
    printBuffer();
}
