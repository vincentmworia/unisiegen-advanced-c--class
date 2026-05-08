/**
Draw X algorithm
Author: Vincent Mwenda Mworia   Date: 08 May 2026

Write a program that draws in the terminal a bigger X out of the character 'X',
 depending on the variable int size (with size = 3, 4, ..., 20):
 size = 3:     size = 4:      size = 5:      etc.
   XX X         XX  X          XX   X
    XX           XXX            XX X
   X XX          XXX             XX
                X  XX           X XX
                               X   XX

Stochastics:
    The left "\" diagonal happens when row==column
    Add one more X per row, when row+1==column
    The right "/" diagonal happens when row+column==size-1

*/
#include <iostream>  // to allow use of std::cout and std::endl

int main() {
    constexpr int8_t size = 3;

    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            if ((row == col) || ((row + 1) == col) || ((row + col) == (size - 1))) {
                std::cout << "X";
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
}
