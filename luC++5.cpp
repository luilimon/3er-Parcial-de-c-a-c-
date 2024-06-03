#include <iostream>
using namespace std;

int main() {
    int t, acum = 0;
    
    cout<<"Digite el tamaño del vector (arreglo): ";
    cin>>t;
    int vector[t];
    
    for(int i = 0; i < t; i++) {
        cout<<"Digite un numero: ";
        cin>>vector[i];
        acum += vector[i];
    }
    
    cout<<"La suma total es: " <<acum<< endl;
    
    return 0;
}
