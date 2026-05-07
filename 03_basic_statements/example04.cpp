/**
  Write a program that counts from 131 down till 23, one number per line in the
  the terminal, and prints out "hop", if the number is a multiple of 7.
  */
#include <iostream>  // to allow use of std::cout and std::endl

int main() {
    for (int number = 131; number >= 23; number--) {
        if ((number % 7) == 0) {
            std::cout << "hop" << std::endl;
        } else {
            std::cout << number << std::endl;
        }
    }
}
