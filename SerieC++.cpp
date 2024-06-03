#include <iostream>

int main() 
{
    int n, i, term;
    std::cout << "Ingrese cuantos terminos de la serie desea mostrar: ";
    std::cin >> n;

    std::cout << "La serie es: ";
    term = 5;

    for(i = 1; i <= n; i++) {
        std::cout << term << " ";
        term += 5;
    }
    std::cout << std::endl;

    return 0;
}


