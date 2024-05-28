#include <iostream>

using namespace std;

int main() {
    int numeros[10];
    int maxNumero, posNumero;

    for (int i = 0; i < 10; i++) {
        cout<<"Numero "<<i + 1<<": ";
        cin>>numeros[i];

        if (i == 0) {
            maxNumero = numeros[i];
            posNumero = i;
        } else if (numeros[i] > maxNumero) {
            maxNumero = numeros[i];
            posNumero = i;
        }
    }

    cout<<"El valor maximo es "<<maxNumero<<endl;
    cout<<"Posicion del numero "<<posNumero<<endl;
    
    return 0;
}