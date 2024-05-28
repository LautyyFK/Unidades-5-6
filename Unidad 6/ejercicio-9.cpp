#include <iostream>

using namespace std;

int main() {
    int numeros[20];
    bool ordenado = true;

    for (int i = 0; i < 20; i++) {
        cout<<"Numero "<<i + 1<<": ";
        cin>>numeros[i];
    }

    for (int j = 1; j < 20; j++) {
        if (numeros[j-1] >= numeros[j]) {
            ordenado = false;
        }
    }

    if (ordenado) {
        cout<<"Esta ordenado."<<endl;
    } else {
        cout<<"No esta ordenado."<<endl;
    }

    return 0;
}