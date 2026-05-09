#include <iostream>

int main() {
    int width;
    std::cout << "Enter the width of the fin: ";
    std::cin >> width;

    if (width < 3) {
        std::cout << "Input must be at least 3. Exiting." << std::endl;
        return 0;
    }


    for (int i = 0; i < width; i++) {
        for (int j = 0; j <= i; j++) {
            std::cout << "| ";
        }

        std::cout << std::endl;
    }


    return 0;
}
