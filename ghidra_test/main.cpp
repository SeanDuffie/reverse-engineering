// Your First C++ Program

//#include <iostream>
//#include "functions.hpp"

int main() {
    int stack = 1;
    int* heap = new int();
    *heap = 2;
    delete(heap);


    /*
    //std::cout << "Hello World!" << std::endl;

    //int a = 12;
    //double b = 4.33;
    //char c = 'c';
    //char d[] = "string";

    //int cum1 = 0;
    int cum2 = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int n = 0;

            //int num1 = sum(i, j);
            sum_p(i, j, &n);

            //cum1 += num1;
            cum2 += n;

            if (i == j) {
                //std::cout << num1 << std::endl;
                std::cout << n << std::endl;
            }
        }
    }

    //std::cout << "Total = " << cum1 << std::endl;
    std::cout << "Total = " << cum2 << std::endl;*/

    return 0;
}
