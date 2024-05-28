#include <iostream>

using namespace std;

int main() {
    int numeros[10];
    int contPrimos = 0;

    for (int i = 0; i < 10; i++) {
        cout<<"Numero "<<i + 1<<": ";
        cin>>numeros[i];
    }
    
    for (int j = 0; j < 10; j++) {
        bool esPrimo = true;

        if (numeros[j] <= 1) {
            esPrimo = false;
        }
        
        for (int k = 2; k < numeros[j] - 1; k++) {
            if (numeros[j] % k == 0) {
                esPrimo = false;
            }
        }

        if (esPrimo) {
            contPrimos++;
        }
    }

    cout<<"Hay "<<contPrimos<<" numeros primos."<<endl;
    
    return 0;
}