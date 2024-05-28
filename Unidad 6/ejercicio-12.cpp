#include <iostream>

using namespace std;

int main() {
    int numeros[10];
    int numero, contador = 0;

    for (int i = 0; i < 10; i++) {
        cout<<"Numero "<<i + 1<<": ";
        cin>>numeros[i];
    }

    cout<<"Ingrese un numero: ";
    cin>>numero;
    
    for (int j = 0; j < 10; j++) {
        if (numeros[j] == numero) {
            contador++;
        }       
    }

    cout<<"El numero aparece "<<contador<<" veces."<<endl;

    return 0;
}