/*
Escribir una función de nombre validarFecha que reciba 3 valores
correspondientes al día, mes y año, y devuelva 1 si los valores recibidos
corresponden a una fecha correcta o 0 si no es correcta. Por ejemplo, si la
función recibe 30, 2, 2000 deberá devolver 0; y si recibe 12, 2, 1990, deberá
devolver 1.
*/

#include <iostream>

using namespace std;

bool esBisiesto (int year) {

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return true;
    }

    return false;
}

int validarFecha (int dia, int mes, int year) {
    
    switch (mes) {
        // Hasta 31
        case 1: // Enero
        case 3: // Marzo
        case 5: // Mayo
        case 7: // Julio
        case 8: // Agosto
        case 10: // Octubre
        case 12: // Diciembre
            if (dia > 31 || dia < 1) {
                return 0;
            }
            break;
        // Hasta 30
        case 4:  // Abril
        case 6: // Junio
        case 9: // Septiembre
        case 11: // Noviembre   
            if (dia > 30 || dia < 1) {
                return 0;
            }
            break;
        // 29
        case 2: // Febrero
            if (esBisiesto(year)) {
                if (dia > 29 || dia < 1) {
                    return 0;
                }
            } else {
                if (dia > 28 || dia < 1) {
                    return 0;
                }
            }
            break;
        default:
            return 0;
            break;
    }

    return 1;
}

int main() {
    int Dia, Mes, Year;

    cout<<"Ingrese el Dia: ";
    cin>>Dia;

    cout<<"Ingrese el Mes: ";
    cin>>Mes;

    cout<<"Ingrese el Anio: ";
    cin>>Year;

    if (validarFecha(Dia, Mes, Year)) {
        cout<<"La fecha es valida."<<endl;
    } else {
        cout<<"La fecha es invalida."<<endl;
    }

    return 0;
}