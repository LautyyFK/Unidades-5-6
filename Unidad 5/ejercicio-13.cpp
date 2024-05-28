/*
Escribir una función llamada calcularPotencia para que, dados dos números
enteros, calcule y devuelva la potencia del primero a la del segundo. Tener en
cuenta las siguientes posibilidades:
calcularPotencia(2, 3) → 8
calcularPotencia(2, 0) → 1
calcularPotencia(2, -3) → 0,125
*/

double calcularPotencia(int numero, int potencia) {

    if (potencia == 0) {
        return 1;
    }

    double resultado = numero;
    int potenciaPos = potencia;

    if (potenciaPos < 0) {
        potenciaPos = potenciaPos * (-1);
    }

    for (int i = 1; i < potenciaPos; i++) {
        resultado *= numero;
    }

    if (potencia < 0) {
        resultado = 1 / resultado;
    }

    
    return resultado;
}

#include <iostream>

using namespace std;

int main() {
    int numero, potencia;

    cout<<"Ingrese un numero: ";
    cin>>numero;

    cout<<"Ingrese la potencia: ";
    cin>>potencia;

    cout<<"El resultado es "<<calcularPotencia(numero, potencia)<<endl;

    return 0;
}