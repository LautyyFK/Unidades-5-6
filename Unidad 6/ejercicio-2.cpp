#include <iostream>

using namespace std;

int main() {
    int numeros[10];
    double promedio = 0;

    for (int i = 0; i < 10; i++) {
        cout<<"Numero "<<i + 1<<": ";
        cin>>numeros[i];
        promedio += numeros[i];
    }

    promedio = promedio / 10;

    for (int j = 0; j < 10; j++) {
        if(numeros[j] > promedio) {
            cout<<numeros[j]<<" ";
        }
    }

    return 0;
}