#include <iostream>

using namespace std;

int main() {
    int numeros[10];
    int contPares = 0;

    for (int i = 0; i < 10; i++) {
        cout<<"Numero "<<i + 1<<": ";
        cin>>numeros[i];
    }
    
    for (int j = 0; j < 10; j++) {
        if (numeros[j] % 2 == 0) {
            contPares++;
        }       
    }

    cout<<"Hay "<<contPares<<" numeros pares."<<endl;
    
    return 0;
}