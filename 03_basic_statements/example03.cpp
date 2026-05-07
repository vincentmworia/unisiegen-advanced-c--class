/**
  Write a program that asks the user for a number, and then prints out this number
  in the terminal, followed by the half of the previous number until
  the result is smaller than ten. So for 100 it would give out: 100, 50, 25.5, 12.25
  */
#include <iostream>  // to allow use of std::cout and std::endl

int main() {
    double number;

    std::cout << "Hello User, " << std::endl;
    std::cout << "Enter a number and you will get it's halves until the number is smaller than 10: ";
    std::cin >> number;
    while (number >= 10.0) {
        std::cout << number << std::endl;
        number /= 2;
    }
}
