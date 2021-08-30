//
// Created by Nikita Nesterov on 26.08.2021.
//

#include "WrongMoveException.h"

WrongMoveException::WrongMoveException(std::string str): message(std::move(str)) {

}

const char *WrongMoveException::what() const noexcept {
    return message.c_str();
}
