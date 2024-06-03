#include <iostream>

int main()
{
    int i, n, co, ac;
    co = 0;
    ac = 0;
    do
    {
        std::cout << "Introduzca un numero: ";
        std::cin >> n;
        std::cout << "Has introducido el numero " << n << std::endl;
        ac = ac + n;
        co = co + 1;
    } while (n > 0);
    std::cout << "Has introducido " << co << " numeros" << std::endl;
    std::cout << "La suma de los numeros es " << ac << std::endl;

    return 0;
}


