//
// Created by Nikita on 21.06.2021.
//

#ifndef CHESS_WRONGINPUTEXCEPTION_H
#define CHESS_WRONGINPUTEXCEPTION_H
#include <string>

class WrongInputException: public std::exception {
private:
    std::string message;
public:
    explicit WrongInputException(std::string str);

//    WrongInputException(const char *str) : message(str) {}

    virtual ~WrongInputException() noexcept {}

    const char *what() const noexcept override;
};


#endif //CHESS_WRONGINPUTEXCEPTION_H
