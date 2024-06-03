#include <iostream>

int main() {
    int num[5];

    for (int i = 0; i < 5; i++) {
        std::cout << "Digite un numero para la posicion " << i << ": ";
        std::cin >> num[i];
    }

    for (int i = 0; i < 5; i++) {
        std::cout << "El dato en la posicion " <<i<< " exportes: " << num[i] << std::endl;
    }

    return 0;
}
