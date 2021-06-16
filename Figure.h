//
// Created by Nikita on 11.06.2021.
//

#ifndef CHESS_FIGURE_H
#define CHESS_FIGURE_H
enum color{
    BLACK,
    WHITE,
};

class Figure {
private:
    int row;
    int col;
    color color;
public:
    Figure();
    Figure(int row, int col, enum color color);
    Figure(const Figure &obj);
    virtual void move(){}
    virtual void hit(){}
    int getX();
    int getY();
    void setRow(int row);
    void setCol(int col);
    enum color getColor();
};


#endif //CHESS_FIGURE_H
