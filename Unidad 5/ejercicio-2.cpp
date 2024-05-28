/*
Hacer una función llamada CalcularMaximo que determine el máximo entre
dos números. La función debe recibir dos números enteros por valor y devolver
el valor más grande. Si los números son iguales debe devolver cualquiera de
los dos. La función no debe mostrar nada por pantalla.
Hacer un programa para ingresar dos números y, utilizando CalcularMaximo,
emita luego el número mayor de ambos
*/

#include <iostream>

using namespace std;

int CalcularMaximo(int n1, int n2) {
    if (n1 > n2) {
        return n1;
    } else {
        return n2;
    }
}

int main() {

    int num1, num2;

    cout<<"Ingrese un numero: ";
    cin>>num1;

    cout<<"Ingrese un numero: ";
    cin>>num2;

    cout<<"El maximo es "<<CalcularMaximo(num1, num2)<<endl;

    return 0;
}