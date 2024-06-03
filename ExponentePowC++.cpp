#include <iostream>
#include <cmath>

int main()
{    
    double base, exponente, resultado;

    std::cout << "Ingresa la base: ";
    std::cin >> base;

    std::cout << "Ingresa el exponente: ";
    std::cin >> exponente;

    resultado = std::pow(base, exponente);

    std::cout << base << " elevado a " << exponente << " es " << resultado << std::endl;

    return 0;
}


