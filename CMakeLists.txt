cmake_minimum_required(VERSION 3.17)
project(Chess)

set(CMAKE_CXX_STANDARD 17)

add_executable(Chess main.cpp
        Figures/Figure.cpp
        Board.cpp
        Figures/Rook.cpp
        Figures/Knight.cpp
        Figures/Queen.cpp
        Figures/King.cpp
        Figures/Pawn.cpp
        Figures/Bishop.cpp
        utils.cpp
        Exceptions/WrongInputException.cpp
        Exceptions/WrongMoveException.cpp)