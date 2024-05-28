#include <iostream>

using namespace std;

int main() {
    int numeros[10];
    int numero, prIndice = -1;
    bool prNum = false;
    for (int i = 0; i < 10; i++) {
        cout<<"Numero "<<i + 1<<": ";
        cin>>numeros[i];
    }

    cout<<"Ingrese un numero: ";
    cin>>numero;
    
    for (int j = 0; j < 10; j++) {
        if (numeros[j] == numero) {
            prIndice = j;
            prNum = true;
        }       
    }

    cout<<"El numero aparece en el indice es "<<prIndice<<endl;

    return 0;
}