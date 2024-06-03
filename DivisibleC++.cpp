#include <iostream>

int main() {
    int num1, num2;

    std::cout << "Ingresa el primer numero entero: ";
    std::cin >> num1;
    std::cout << "Ingresa el segundo numero entero: ";
    std::cin >> num2;

    if (num2 != 0 && num1 % num2 == 0) {
        std::cout << num1 << " es divisible entre " << num2 << std::endl;
    } else {
        std::cout << num1 << " no es divisible entre " << num2 << std::endl;
    }

    return 0;
}


