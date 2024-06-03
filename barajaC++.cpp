#include <iostream>

int main() {
    int numero_carta;

    std::cout << "Ingrese el numero de la carta (2-12): ";
    std::cin >> numero_carta;

    if (numero_carta >= 2 && numero_carta <= 9) {
        std::cout << "No es ninguna figura ni tampoco as." << std::endl;
    } else if (numero_carta == 1) {
        std::cout << "As" << std::endl;
    } else if (numero_carta == 10) {
        std::cout << "Sota" << std::endl;
    } else if (numero_carta == 11) {
        std::cout << "Caballo" << std::endl;
    } else if (numero_carta == 12) {
        std::cout << "Rey" << std::endl;
    } else {
        std::cout << "Este no es numero de una carta de la baraja española." << std::endl;
    }

    return 0;
}
