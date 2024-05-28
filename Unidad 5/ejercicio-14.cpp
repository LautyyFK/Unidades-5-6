/*
Hacer una función llamada esNumeroArmstrong que reciba un número entero
y devuelva true si el número enviado es un Número Armstrong y false si no lo
es.
NOTA: Un número N es un número Armstrong si la suma de sus cifras elevadas
a la cantidad de cifras del número da como resultado N.
Por ejemplo:
371 tiene 3 cifras.
Luego:
33 + 73 + 13 → 371
27 + 343 + 1 → 37
*/


#include <iostream>

using namespace std;

int obtenerCifra(int numero) {

    int contador = 0;

    while (numero != 0) {
        numero = numero / 10;
        contador++;
    }

    return contador;
}

int obtenerPotencia(int numero, int potencia) {
    int resultado = numero;

    for (int i = 1; i < potencia; i++) {
        resultado *= numero;
    }

    return resultado;
}

bool esNumeroAmstrong(int numero) {

    int potencia = obtenerCifra(numero);
    int numeroComp = numero;
    int suma = 0;

    for (int i = 1; i <= potencia; i++) {

        suma += obtenerPotencia(numero % 10, potencia);

        numero = numero / 10;
    }

    if (numeroComp == suma) {
        return true;
    }

    return false;
}

int main() {
    int numero;

    cout<<"Ingrese un numero: ";
    cin>>numero;

    if (esNumeroAmstrong(numero)) {
        cout<<"Es un numero de Armstrong."<<endl;
    } else {
        cout<<"No es un numero de Armstrong."<<endl;
    }

    return 0;
}