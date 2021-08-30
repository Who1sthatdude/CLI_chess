//
// Created by Nikita on 11.06.2021.
//

#ifndef CHESS_FIGURE_H
#define CHESS_FIGURE_H

#include <vector>

enum color{
    BLACK,
    WHITE,
};

class Figure {
private:
    int row;
    int col;
    color color;
    char display;
public:
    Figure();
    Figure(int row, int col, enum color color, char display);
    Figure(const Figure &obj);
    virtual void move(int nextRow, int nextCol, std::vector<Figure *> &figures) {}
    virtual void hit(){}
    int getRow() const;
    int getCol() const;
    void setRow(int row);
    void setCol(int col);
    enum color getColor() const;
    char getDisplay();
};


#endif //CHESS_FIGURE_H
