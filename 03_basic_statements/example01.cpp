/**
  Write a program that initializes two integers 'number1' and 'number2',
  and tests whether number1 is a multiple of number2. Put this result in the
  boolean variable 'result' below.
  */

#include <iostream>

int main() {
    bool result = false;

    int8_t number1 = 12;
    int8_t number2 = 3;

    result = number1 % number2 == 0;

    if (result) {
        std::cout << "number1 is a multiple of number2" << '\n';
    } else {
        std::cout << "number1 is not a multiple of number2" << '\n';
    }

    return 0;
}
