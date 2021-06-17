//
// Created by Nikita on 16.06.2021.
//

#include "Pawn.h"

Pawn::Pawn(int row, int col, enum color color, char display) : Figure(row, col, color, display) {

}

Pawn::Pawn(const Pawn &obj) : Figure(obj) {
    
}

void Pawn::move() {

}

void Pawn::hit() {

}
