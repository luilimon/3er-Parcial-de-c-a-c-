#include <iostream>

int main() {
    int num = 1;

    std::cout << "Numeros del 1 al 100:" << std::endl;
    for (num = 1; num <= 100; num++) {
        std::cout << num << std::endl;
    }

    std::cout << "\nNumeros del 1 al 100 de dos en dos:" << std::endl;
    num = 1;
    while (num <= 100) {
        std::cout << num << std::endl;
        num += 2;
    }

    std::cout << "\nNumeros del 100 al 1:" << std::endl;
    for (num = 100; num >= 1; num--) {
        std::cout << num << std::endl;
    }

    return 0;
}


