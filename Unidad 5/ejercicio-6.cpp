/*
Hacer una función que reciba un número entero por valor llamado día y un
string llamado nombre por referencia y le asigne el nombre correspondiente
según el número de día. Siendo 0 → Domingo y 6 → Sábado.
*/
#include <iostream>

using namespace std;

string NombrePorReferencia(int Dia) {

    string NombreDia;

    switch (Dia) {
        case 0:
            NombreDia = "Domingo.";
            break;
        case 1:
            NombreDia = "Lunes.";
            break;
        case 2:
            NombreDia = "Martes.";
            break;
        case 3:
            NombreDia = "Miercoles.";
            break;
        case 4:
            NombreDia = "Jueves.";
            break;
        case 5:
            NombreDia = "Viernes.";
            break;
        case 6:
            NombreDia = "Sabado.";
            break;
        default:
            NombreDia = "Dia invalido.";
            break;
    }

    return NombreDia;
}
int main() {
    int Dia;

    cout<<"Ingrese el dia en numero: ";
    cin>>Dia;

    cout<<Dia<<" -> "<<NombrePorReferencia(Dia)<<endl;

    return 0;
}