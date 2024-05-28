#include <iostream>

using namespace std;

int main() {
    int numeros[10];
    int ulPar, antUltPar;
    int posPar1, posPar2;
    int cPar = 0;

    for (int i = 0; i < 10; i++) {
        cout<<"Numero "<<i + 1<<": ";
        cin>>numeros[i];

        if (numeros[i] % 2 == 0) {
            cPar++;

            if (cPar == 1) {
                ulPar = numeros[i];
                posPar1 = i;
            } else {
                antUltPar = ulPar;
                posPar2 = posPar1;
                
                ulPar = numeros[i];
                posPar1 = i;
            }
        }
    }

    cout<<"El ultimo par es "<<ulPar<<" con posicion "<<posPar1<<endl;

    cout<<"El ante ultimo par es "<<antUltPar<<" con posicion "<<posPar2<<endl;

    return 0;
}