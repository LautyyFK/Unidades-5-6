#include <iostream>

using namespace std;

int main() {
    int numeros[10];
    int valorMaximo;

    for (int i = 0; i < 10; i++) {
        cout<<"Numero "<<i + 1<<": ";
        cin>>numeros[i];
    }

    int numeroA, numeroB;

    cout<<"Ingrese un numero: ";
    cin>>numeroA;

    cout<<"Ingrese un numero: ";
    cin>>numeroB;

    int nMax, nMin;

    nMax = (numeroA > numeroB) ? numeroA : numeroB;
    nMin = (numeroA < numeroB) ? numeroA : numeroB;

    valorMaximo = nMin - 1;

    for (int j = 0; j < 10; j++) {
        if ((numeros[j] < nMax) && (numeros[j] > nMin)) {
            if (numeros[j] > valorMaximo) {
                valorMaximo = numeros[j];
            }
        }
    }

    cout<<"El valor maximo es "<<valorMaximo<<endl;
    
    return 0;
}