#include <iostream>

using namespace std;

int main() {
    int numeros[10];
    int numerosRep[10];

    for (int i = 0; i < 10; i++) {
        cout<<"Numero "<<i + 1<<": ";
        cin>>numeros[i];
    }

    for (int j = 0; j < 10; j++) {
        bool Repetido = false;
        for (int k = 0; k < 10; k++) {
            if (j != k) {
                if (numeros[j] == numeros[k]) {
                    Repetido = true;
                }
            }
        }
        
        if (Repetido) {
            numerosRep[j] = 0;
        } else {
            numerosRep[j] = numeros[j]; 
        }
    }

    for (int x = 0; x < 10; x++) {
        cout<<numerosRep[x]<<" ";
    }

    return 0;
}