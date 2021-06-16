//
// Created by Nikita on 16.06.2021.
//

#include "Board.h"
Board* Board::instance = nullptr;

Board* Board::GetInstance() {
    if(instance != nullptr){
        instance = new Board();
    }
    return instance;
}

Board::Board() {

}

void Board::Initialize() {

}

void Board::AddFigure(const Figure &obj) {
    figures.push_back(obj);
}
