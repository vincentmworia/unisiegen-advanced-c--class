
#include <iostream>

int main() {
    constexpr auto size = 6; 
    const int width = 2 * size - 1;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < width; j++) {
            if (j >= (size - 1 - i) && j <= (size - 1 + i)) {
                std::cout << "X";
            } else if (j < (size - 1 - i)) {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
}
