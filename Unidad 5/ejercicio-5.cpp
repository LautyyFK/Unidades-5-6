/*
Hacer una función llamada Redondear que reciba como parámetro un número
float y devuelva un número entero con el redondeo del mismo.
Por ejemplo:
Si recibe 7.78, debe devolver 8.
Si recibe 7.48, debe devolver 7.
Si recibe 7.5, debe devolver 8.
Hacer un programa para ingresar un número y, utilizando Redondear, emita
luego un cartel indicando el número redondeado.
*/

#include <iostream>

int Redondear(double num) {
    return num + 0.5;
}

using namespace std;

int main() {
    double num;

    cout<<"Ingrese un numero: ";
    cin>>num;

    cout<<"Numero redondeado: "<<Redondear(num);
    return 0;
}