#include <iostream>

using namespace std;

int main() {
    char caracter;

    cout<<"Dame un caracter: ";
    cin>>caracter;

    switch (caracter) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout<<"El caracter ingresado es una vocal.\n";
            break;
        default:
            cout<<"El caracter ingresado no es una vocal.\n";
            break;
    }

    return 0;
}
