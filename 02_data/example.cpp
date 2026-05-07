/*
 Typical I/O Example
 Author: Vincent Date: 05/07/2026

 Pseudo Code:
    System asks for the user's name
    User enters the name
    System welcomes the user by name
    If the name starts with V, welcome and say that admin's name starts with that letter too
 */

#include <iostream>


int main() {
    std::string userName;
    // char userName[20];
    constexpr std::string_view introMessage =
            "Hello user, can you tell us your first name please, must have 20 characters max: ";
    std::cout << introMessage;
    std::cin >> userName;
    std::cout << "Hello " << userName << ", welcome to the world of C++";
    if (userName[0] == 'V') {
        std::cout << "\nWow!!! I like your name. Your admin's name, Vincent, also starts with a V\n";
    }
    return 0;
}
