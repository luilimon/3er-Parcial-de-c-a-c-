#include <iostream>

int main() {
    int hora;
    std::cout << "Ingrese la hora del dia: ";
    std::cin >> hora;

    if (hora > 18) {
        std::cout << "Buenas noches.\n";
    } else if (hora > 12) {
        std::cout << "Buenas tardes.\n";
    } else {
        std::cout << "Buenos dias.\n";
    }

    return 0;
}


