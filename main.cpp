#include <iostream>
#include <string>
#include <algorithm>
#include <utility>
#include "Board.h"

class WrongInputException : public std::exception {
private:
    std::string message;
public:
    WrongInputException(std::string str) : message(std::move(str)) {}

//    WrongInputException(const char *str) : message(str) {}

    virtual ~WrongInputException() noexcept {}

    virtual const char *what() const noexcept override {
        return message.c_str();
    }

};


namespace MoveCoord {
    int prevRow = 0;
    int prevCol = 0;
    int nextRow = 0;
    int nextCol = 0;
}

void parseInput(std::string &str) {
    str.erase(std::remove(str.begin(), str.end(), ' '), str.end());
    std::transform(str.begin(), str.end(), str.begin(), [](unsigned char c) { return std::tolower(c); });
    if (str.length() != 4) {
        throw WrongInputException("Wrong input, please follow the instructions");
    }
    MoveCoord::prevRow = (int) str[0] - 97;
    MoveCoord::prevCol = str[1] - '0' - 1;
    MoveCoord::nextRow = (int) str[2] - 97;
    MoveCoord::nextCol = str[3] - '0' - 1;
    // checking whether the coords numbers are right, don't even try to read that
    if (((MoveCoord::prevRow < 0) || (MoveCoord::prevRow >= 8)) ||
        ((MoveCoord::nextRow < 0) || (MoveCoord::nextRow >= 8)) ||
        ((MoveCoord::prevCol < 0) || (MoveCoord::prevCol >= 8)) ||
        ((MoveCoord::nextCol < 0) || (MoveCoord::nextCol >= 8)))
        throw WrongInputException("Wrong input, please follow the instructions");
}

int main() {
    std::string str;
    Board *board = Board::GetInstance();
    board->Initialize();
    board->show();
    while(true){
        std::cout<<"Enter input in format (A-H 1-8) (A-H 1-8)"<<std::endl;
        std::getline(std::cin, str, '\n');
        try {
            parseInput(str);
        }catch (WrongInputException &e){
            std::cout<<e.what()<<std::endl;
        }
    }


    return 0;
}
