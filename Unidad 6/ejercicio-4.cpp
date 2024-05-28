#include <iostream>

using namespace std;

int main() {
    int numeros[10];
    int numerosAbs[10];
    int valorMaximo, posMaximo;

    for (int i = 0; i < 10; i++) {
        cout<<"Numero "<<i + 1<<": ";
        cin>>numeros[i];
        
        if (numeros[i] > 0 ) {
            numerosAbs[i] = numeros[i];
        } else if (numeros[i] < 0) {
            numerosAbs[i] = numeros[i] * (-1);
        }

        if (i == 0) {
            valorMaximo = numerosAbs[i]; 
            posMaximo = i;
        } else if (numerosAbs[i] > valorMaximo) {
            valorMaximo = numerosAbs[i]; 
            posMaximo = i;
        }
    }

    valorMaximo = numeros[posMaximo];

    cout<<"El valor maximo absoluto es "<<valorMaximo<<endl;

    return 0;
}