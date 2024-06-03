#include <iostream>
using namespace std;

int main() {
    int num[10];

    for (int i = 0; i < 10; ++i) {
        num[i] = (i * 73) % 100 + 1;
    }

    cout<<"Los números aleatorios son:";
    for (int i = 0; i < 10; ++i) {
        cout<<" "<<num[i];
    }
    cout<<endl;

    return 0;
}
