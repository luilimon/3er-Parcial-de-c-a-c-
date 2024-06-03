#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Digite el número de países: ";
    cin>>n;
    string paises[n];

    for (int i = 0; i < n; ++i) {
        cout<<"Digite el país " <<i + 1<< ": ";
        cin>>paises[i];
    }

    int pos;
    cout<<"Digite la posición: ";
    cin>>pos;

    cout<<"El país que hay en la posición " <<pos<< " es: " <<paises[pos]<<endl;

    return 0;
}
