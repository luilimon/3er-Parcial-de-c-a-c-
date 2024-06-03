#include <iostream>

using namespace std;

int main() {
    char caracter;

    cout<<"Dame un caracter: ";
    cin>>caracter;

    if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u') {
        cout<<"El caracter ingresado es una vocal.\n";
    } else {
        cout<<"El caracter ingresado no es una vocal.\n";
    }

    return 0;
}
