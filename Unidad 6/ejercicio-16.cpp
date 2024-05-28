#include <iostream>

using namespace std;

int main() {
    int numeros[10];
    bool Repetidos = false;

    for (int i = 0; i < 10; i++) {
        cout<<"Numero "<<i + 1<<": ";
        cin>>numeros[i];
    }

    for (int j = 0; j < 10; j++) {
        for (int k = 0; k < 10; k++) {
            if (j != k) {
                if (numeros[j] == numeros[k]) {
                    Repetidos = true;
                }
            }
        }
    }

    if (Repetidos) {
        cout<<"Hay repetidos."<<endl;
    } else {
        cout<<"No hay repetidos."<<endl;
    }

    return 0;
}