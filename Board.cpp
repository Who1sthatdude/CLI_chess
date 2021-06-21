//
// Created by Nikita on 16.06.2021.
//

#include "Board.h"
#include "Figures/Pawn.h"
#include "Figures/Rook.h"
#include "Figures/Knight.h"
#include "Figures/King.h"
#include "Figures/Bishop.h"
#include "Figures/Queen.h"
#include "utils.h"
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
            int index = findFigureIndex(i, j ,figures);
            if(index != -1){
                buffer[i][j] = figures.at(index)->getDisplay();
            } else {
                buffer[i][j] = '.';
            }
        }
    }
}

void Board::printBuffer() {
    for (int i = 0; i < 8; i++) {
        std::cout << i + 1 << " | ";
        for (int j = 0; j < 8; j++) {
            std::cout << buffer[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << "    _ _ _ _ _ _ _ _" << std::endl;
    std::cout << "    A B C D E F G H\n" << std::endl;
}

void Board::show() {
    makeBuffer();
    printBuffer();
}

void Board::makeMove(int prevRow, int prevCol, int nextRow, int nextCol) {
    color player = (movesCounter % 2) ? BLACK : WHITE;
    auto iter = std::find_if(figures.begin(), figures.end(),
                             [prevRow, prevCol](Figure *obj) {
                                 return (obj->getRow() == prevRow) && (obj->getCol() == prevCol);
                             });
    if (iter != figures.end()) {
        auto index = std::distance(figures.begin(), iter);
        if(figures.at(index)->getColor()==player){
            try {
                figures.at(index)->move(nextRow, nextCol, figures);
            }catch (std::exception &e){
                std::cout<<e.what()<<std::endl;
                movesCounter--;
            }
        }
        movesCounter++;
    }

    }
