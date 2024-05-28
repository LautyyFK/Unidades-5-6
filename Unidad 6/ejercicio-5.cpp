#include <iostream>

using namespace std;

int main() {
    int numeros[10];
    int parMax, impMenor;
    int cPares = 0, cImpares = 0;

    for (int i = 0; i < 10; i++) {
        cout<<"Numero "<<i + 1<<": ";
        cin>>numeros[i];

        if (numeros[i] % 2 == 0) {
            cPares++;

            if (cPares == 1) {
                parMax = numeros[i];
            } else if (numeros[i] > parMax) {
                parMax = numeros[i];
            }   
        } else {
            cImpares++;

            if (cImpares == 1) {
                impMenor = numeros[i];
            } else if (numeros[i] < impMenor) {
                impMenor = numeros[i];
            }
        }
    }

    cout<<"El maximo de los pares es "<<parMax<<endl;
    cout<<"El minimo de los impares es "<<impMenor<<endl;
     
    return 0;
}