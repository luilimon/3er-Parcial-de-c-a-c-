#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string arreglo1[2], arreglo2[3];
    
    arreglo1[0]="fernando";
    arreglo1[1]="oscar";
    
    arreglo2[0]="74";
    arreglo2[1]="50";
    arreglo2[2]="10";
    
    cout<<"Arreglo1:" << endl;
    for (int i = 0; i < 2; i++) {
        cout<< "El dato en la posición " <<i<< "es:" <<arreglo1[i]<< endl;
    }
    
    cout<<"Arreglo2:" << endl;
    for (int i = 0; i < 3; i++) {
        cout<<"El dato en la posición " <<i<< "es:" <<arreglo2[i]<< endl;
    }

    return 0;
}
