/*
Hacer una función llamada contarDigitos que reciba por valor un número
entero y determine y devuelva la cantidad de dígitos del número. Por ejemplo,
si se recibe el número 840 debe devolver 3.
Hacer un programa que, a partir de un número que ingresa el usuario, informe
por pantalla la cantidad de dígitos del número ingresado.
*/

#include <iostream>

using namespace std;

int contarDigitos(int numero) {
    int contador = 0;

    while (numero != 0) {
        numero = numero / 10;
        contador++;
    }

    return contador;
}

int main() {
    int numero;

    cout<<"Ingrese un numero: ";
    cin>>numero;

    cout<<"El numero tiene "<<contarDigitos(numero)<<" digitos."<<endl;

    return 0;
}