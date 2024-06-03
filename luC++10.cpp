#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout<<"Digite el número de filas: ";
    cin>>n;
    
    cout<<"Digite el número de columnas: ";
    cin>>m;
    int matriz[n][m];

    for (int i=0;i<n;++i) {
        for (int j=0;j<m;++j) {
            cout<<"Digite el dato para la fila " <<i+1<<" y columna "<<j+1<<": ";
            cin>>matriz[i][j];
        }
    }

    for (int i=0;i<n;++i) {
        for (int j=0;j<m;++j) {
            cout<<"Los datos que hay en la fila " <<i+1<< " y columna " <<j+1<<" son: "<<matriz[i][j]<<endl;
        }
    }

    return 0;
}
