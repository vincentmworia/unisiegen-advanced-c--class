/**
Draw X algorithm
Author: Vincent Mwenda Mworia   Date: 08 May 2026

Write a program that draws in the terminal a big X out of the character 'X',
 depending on the variable int size (with size = 3, 4, ..., 20):
 size = 3:     size = 4:      size = 5:      etc.
   X X          X  X           X   X
    X            XX             X X
   X X           XX              X
                X  X            X X
                               X   X
Stochastics:
    The left "\" diagonal happens when row==column
    The right "/" diagonal happens when row+column==size-1

*/

#include <iostream>

int main() {
    constexpr auto size = 10;

    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            if ((row == col) || ((row + col) == (size - 1))) {
                std::cout << "X";
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
}
