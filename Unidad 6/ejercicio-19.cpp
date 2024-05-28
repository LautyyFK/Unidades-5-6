#include <iostream>

using namespace std;

int main() {
    int numerosA[10];
    int numerosB[10];

    for (int i = 0; i < 10; i++) {
        cout<<"Numero "<<i + 1<<": ";
        cin>>numerosA[i];
    }

    for (int j = 0; j < 10; j++) {
        cout<<"Numero "<<j + 1<<": ";
        cin>>numerosB[j];
    }

    int numerosRep[10];
    int cRep = 0;

    for (int k = 0; k < 10; k++) {
        bool Repetido = false;
        for (int x = 0; x < 10; x++) {
            if (numerosA[k] == numerosB[x]) {
                if (!Repetido) {
                    numerosRep[cRep++] = numerosA[k];
                    Repetido = true;
                }
            }
        }
    }

    for (int c = 0; c < cRep; c++) {
        cout<<numerosRep[c]<<" ";
    }

    return 0;
}