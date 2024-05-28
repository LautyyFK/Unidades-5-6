#include <iostream>

using namespace std;

int main() {
    int numerosMax[10];
    int numero;
    
    for (int i = 0; i < 10; i++) {
        bool prNum = false;
        int valorMax;

        cout<<"Ingrese un numero: ";
        cin>>numero;

        while (numero != 0) {

            if (!prNum) {
                valorMax = numero;
                prNum = true; 
            } else if (numero > valorMax) {
                valorMax = numero;
            }

            cout<<"Ingrese un numero: ";
            cin>>numero;
        }

        numerosMax[i] = valorMax;

        cout<<endl;
    }

    for (int j = 0; j < 10; j++) {
        cout<<numerosMax[j]<<" ";
    }

    return 0;
}