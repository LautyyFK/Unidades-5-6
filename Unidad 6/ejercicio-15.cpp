#include <iostream>

using namespace std;

int main() {

    int numeros[5];

    for (int i = 0; i < 5; i++) {
        cout<<"Numero "<<i + 1<<": ";
        cin>>numeros[i];
    }

    int numerosCompleto[9];
    int cVector = 0;

    for (int j = 0; j < 5; j++) {
        numerosCompleto[cVector++] = numeros[j];

        if (j <= 3) {
            numerosCompleto[cVector++] = (numeros[j] + numeros[j+1]) / 2;
        }
    }

    for (int x = 0; x < 9; x++) {
        cout<<numerosCompleto[x]<<" ";
    }

    return 1;
}