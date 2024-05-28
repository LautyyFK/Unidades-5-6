/*
Hacer una función llamada EsPrimo que determine si un número es primo o
no. La función debe recibir el número y devolver true si es primo o false si no lo
es. La función no debe mostrar nada por pantalla.
Hacer un programa para ingresar un número y, utilizando EsPrimo, emita luego
un cartel indicando si el número ingresado es primo o no es primo.
*/

#include <iostream>


bool EsPrimo(int num) {

    if (num <= 1) {
        return false;
    }

    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

using namespace std;

int main() {
    int num;

    cout<<"Ingrese un numero: ";
    cin>>num;

    if (EsPrimo(num)) {
        cout<<"Es Primo."<<endl;
    } else {
        cout<<"No es Primo."<<endl;
    }

    return 0;
}