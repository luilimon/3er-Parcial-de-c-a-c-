#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    cout<<"Ingrese el primer número entero: ";
    cin>>num1;

    cout<<"Ingrese el segundo número entero: ";
    cin>>num2;

    cout<<"Ingrese el tercer número entero: ";
    cin>>num3;

    if (num1 <= num2 && num1 <= num3) {
        if (num2 <= num3) {
            cout<<num1<<", "<<num2<<", "<<num3<<endl;
        } else {
            cout<<num1<<", "<<num3<<", "<<num2<<endl;
        }
    } else if (num2 <= num1 && num2 <= num3) {
        if (num1 <= num3) {
            cout<<num2<<", "<<num1<<", "<<num3<<endl;
        } else {
            cout<<num2<<", "<<num3<<", "<<num1<<endl;
        }
    } else {
        if (num1 <= num2) {
            cout<<num3<<", "<<num1<<", "<<num2<<endl;
        } else {
            cout<<num3<<", "<<num2<<", "<<num1<<endl;
        }
    }

    return 0;
}
