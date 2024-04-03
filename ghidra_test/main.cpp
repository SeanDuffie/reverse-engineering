// Your First C++ Program

#include <iostream>
#include "functions.hpp"

int main() {
    std::cout << "Hello World!" << std::endl;

    int a = 12;
    float b = 4.33;
    char c = 'c';
    char d[] = "string";

    int cum = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int num = sum(i, j);

            cum += num;

            if (i == j) {
                std::cout << num << std::endl;
            }
        }
    }

    std::cout << "Total = " << cum << std::endl;

    return 0;
}
