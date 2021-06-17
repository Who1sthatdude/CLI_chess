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
    char display;
public:
    Figure();
    Figure(int row, int col, enum color color, char display);
    Figure(const Figure &obj);
    virtual void move(){}
    virtual void hit(){}
    int getRow() const;
    int getCol() const;
    void setRow(int row);
    void setCol(int col);
    enum color getColor();
    wchar_t getDisplay();
};


#endif //CHESS_FIGURE_H
