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
    try {
        MoveCoord::prevRow = (int) str[0] - 97;
        MoveCoord::prevCol = str[1] - '0' - 1;
        MoveCoord::nextRow = (int) str[2] - 97;
        MoveCoord::nextCol = str[3] - '0' - 1;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}

int main() {
    std::string str;
    std::getline(std::cin, str, '\n');
    parseInput(str);
    Board *board = Board::GetInstance();
    board->Initialize();
    board->show();
    return 0;
}
