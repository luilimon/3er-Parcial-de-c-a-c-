#include <iostream>

int main() {
    int num1, num2;

    std::cout << "Ingresa el primer numero: ";
    std::cin >> num1;
    std::cout << "Ingresa tu segundo numero: ";
    std::cin >> num2;

    if (num1 == num2) {
        std::cout << "Los numeros son iguales." << std::endl;
    } else if (num1 > num2) {
        std::cout << "El primer numero es mayor que el segundo." << std::endl;
    } else {
        std::cout << "El segundo numero es mayor que el primero." << std::endl;
    }

    return 0;
}


