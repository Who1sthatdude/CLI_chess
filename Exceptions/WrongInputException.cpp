//
// Created by Nikita on 21.06.2021.
//

#include "WrongInputException.h"

const char *WrongInputException::what() const noexcept {
        return message.c_str();
}

WrongInputException::WrongInputException(std::string str): message(std::move(str)) {

}
