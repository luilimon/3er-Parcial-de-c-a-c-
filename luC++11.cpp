#include <iostream>
using namespace std;
int main() {
    int filas, columnas, acum = 0;

    cout<<"Digite el número de filas: ";
    cin>>filas;
    cout<<"Digite el número de columnas: ";
    cin>>columnas;
    int matriz[filas][columnas];

    for (int i=0;i<filas;++i)
        for (int j=0;j<columnas;++j) {
            cout<<"Digite dato para la fila "<<i+1<<" y columna "<<j+1<<": ";
            cin>>matriz[i][j];
        }

    for (int i=0;i<filas;++i)
        acum+=matriz[i][0];
    for (int i=0;i<filas;++i) {
        for (int j=0;j<columnas;++j)
            cout<<matriz[i][j]<<" ";
        cout<<endl;
    }

    cout<<"Todos los elementos de la columna 1 suman un total de: "<<acum<<endl;

    return 0;
}
