#include <iostream>

int main() 
{
    int num1, num2, num3;

    std::cout << "Dame el primer numero: ";
    std::cin >> num1;
    std::cout << "Dame el segundo numero: ";
    std::cin >> num2;
    std::cout << "Dame el tercer numero: ";
    std::cin >> num3;

    if (num1 == 1 && num2 == 2 && num3 == 3) {
        std::cout << "Acceso permitido\n";
    } else {
        std::cout << "Acceso rechazado\n";
    }

    return 0;
}
