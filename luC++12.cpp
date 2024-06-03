#include <iostream>
using namespace std;
int main() {
    int filas=3,columnas=3;
    int matriz[filas][columnas];
    for (int i=0;i<filas;++i)
        for (int j= 0; j<columnas;++j)
            matriz[i][j]=rand() % 10;
    for (int i=0;i<filas;++i) {
        for (int j=0;j<columnas;++j)
            cout<<matriz[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}
