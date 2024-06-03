#include <iostream>

const float Precio_entrada = 70.0;

int main() {
    int edad;
    float precio_final;

    std::cout << "Ingrese su edad: ";
    std::cin >> edad;

    if (edad < 5) {
        precio_final = Precio_entrada * 0.4;
    } else if (edad > 60) {
        precio_final = Precio_entrada * 0.45;
    } else {
        precio_final = Precio_entrada;
    }

    std::cout << "El precio de la entrada es: " << precio_final << " pesos" << std::endl;

    return 0;
}


