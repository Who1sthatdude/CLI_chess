//
// Created by Nikita Nesterov on 26.08.2021.
//

#ifndef CHESS_WRONGMOVEEXCEPTION_H
#define CHESS_WRONGMOVEEXCEPTION_H
#include <string>

class WrongMoveException: public std::exception {
private:
    std::string message;
public:
    explicit WrongMoveException(std::string str);

//    WrongInputException(const char *str) : message(str) {}

    virtual ~WrongMoveException() noexcept {}

    const char *what() const noexcept override;
};


#endif //CHESS_WRONGMOVEEXCEPTION_H
