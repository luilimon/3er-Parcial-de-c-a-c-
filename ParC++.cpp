#include <iostream>

int main() {
    int n1;
    std::cout << "Ingresa un numero:";
    std::cin >> n1;

    if (n1 % 2 == 0) {
        std::cout << n1 << " es numero par.\n";
    } else {
        std::cout << n1 << " es un numero impar.\n";
    }

    if (n1 % 3 == 0) {
        std::cout << n1 << " es multiplo de 3.\n";
    }

    return 0;
}


