#include <iostream>

int main() {
    int opcion;
    float base, altura, base_mayor, base_menor, area;

    std::cout << "CALCULO DE AREAS\n";
    std::cout << "1. Calcular el area de un triangulo\n";
    std::cout << "2. Calcular el area de un trapecio\n";
    std::cout << "3. Calcular el area de un rectangulo\n";
    std::cout << "Seleccione una opcion: ";
    std::cin >> opcion;

    switch(opcion) {
        case 1:
            std::cout << "Ingrese la base del triangulo: ";
            std::cin >> base;
            std::cout << "Ingrese la altura del triangulo: ";
            std::cin >> altura;
            area = (base * altura) / 2;
            std::cout << "El area del triangulo es: " << area << "\n";
            break;
        case 2:
            std::cout << "Ingrese la base mayor del trapecio: ";
            std::cin >> base_mayor;
            std::cout << "Ingrese la base menor del trapecio: ";
            std::cin >> base_menor;
            std::cout << "Ingrese la altura del trapecio: ";
            std::cin >> altura;
            area = ((base_mayor + base_menor) * altura) / 2;
            std::cout << "El area del trapecio es: " << area << "\n";
            break;
        case 3:
            std::cout << "Ingrese la base del rectangulo: ";
            std::cin >> base;
            std::cout << "Ingrese la altura del rectangulo: ";
            std::cin >> altura;
            area = base * altura;
            std::cout << "El area del rectangulo es: " << area << "\n";
            break;
        default:
            std::cout << "Opcion no valida\n";
            break;
    }

    return 0;
}


