/*
Escribir una función que reciba un número y retorne 1 si el número recibido es
perfecto y 0 si no es perfecto.
Hacer un programa para que, dada una lista de números que finaliza con cero,
informe cuántos de ellos eran perfectos. Utilizar la función solicitada.
*/

#include <iostream>

using namespace std;

bool EsPerfecto(int num) {
    int cDivisores = 0;

    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            cDivisores += i;
        }
    }

    if (cDivisores == num) {
        return true;
    }

    return false;
}

int main() {

    int num;

    cout<<"Ingrese un numero: ";
    cin>>num;

    while (num != 0) {

        if (EsPerfecto(num)) {
            cout<<"El numero es perfecto."<<endl;
        } else {
            cout<<"El numero no es perfecto."<<endl;
        }

        cout<<"Ingrese un numero: ";
        cin>>num;
    }

    return 0;
}