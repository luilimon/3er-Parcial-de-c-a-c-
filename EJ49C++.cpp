//modificar el numero de indice para que no salga cero sino desde 1
#include <iostream>
using namespace std;

int main()
{
    int n, i = 1, acum = 1;
    int vector[21];

    for (i = 1; i < 21; i++) {
        cout << "ingresa numero entero " << i << ": ";
        cin >> n;
        vector[i] = n;
        acum += n;
        if (n == 0) {
            break;
        }
    }

    cout << "tus numeros ingresados son \n";
    for (int j = i - 1; j >= 0; j--) {
        cout << "el numero " << j << " ingresado fue " << vector[j] << endl;
    }

    return 0;
}
