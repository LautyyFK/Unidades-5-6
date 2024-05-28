/*
Hacer una función que reciba un código de naipe (del 1 al 40) y determine el
número y el palo de la baraja española de 40 cartas. La función debe recibir por
referencia el número de naipe y el nombre del palo y por valor el código de
naipe.
Tener en cuenta que:
Los códigos de naipes de espada van del 1 al 10, basto del 11 al 20, copa del
21 al 30 y oro del 31 al 40. Por ejemplo, naipe con ID #10 es el 12 de espadas.
*/

#include <iostream>

using namespace std;

void codigoNaipe(int codigo) {

    string naipe;
    int numero;

    if (codigo <= 10) {
        naipe = "Espada";
    } else if (codigo <= 20) {
        naipe = "Basto";
        numero = codigo - 10;
    } else if (codigo <= 30) {
        naipe = "Copa";
        numero = codigo - 20;
    } else {
        naipe = "Oro";
        numero = codigo - 30;
    }

    if (numero > 7) {
        numero += 2;
    }

    cout<<"La carta es "<<numero<<" de "<<naipe<<endl;
}   

int main() {
    int codigo;

    cout<<"Ingrese el codigo: ";
    cin>>codigo;

    codigoNaipe(codigo);

    return 0;
}