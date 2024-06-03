#include <iostream>
using namespace std;

int main ()
{
    int num, men;
    
    std::cout<<"Ingresa 5 numeros enteros:\n";
    cin>>num;
    men = num;
    
    for (int i=1; i<5; i++) 
    {
        cin>>num;
        
        if (num<men) {
            men=num;
        }
        
    }
    std::cout<<"El numero menor es: \n", men;
    
    return 0;
}
