/**
Prime Numbers Algorithm
Author: Vincent Mwenda Mworia Date: 08 May 2026

Write a program that prints in the terminal all prime numbers from 3 till 99.
 Remember: A number is a prime when any division by a smaller number results in
 a remainder that is never zero.
*/
#include <iostream>


int main() {
    for (int number = 3; number <= 99; number++) {
        bool isPrime = true;
        for (int i = 2; i < number; i++) {
            if (number % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            std::cout << number << std::endl;
        }
    }
}
