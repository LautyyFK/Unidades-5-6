#include <iostream>

using namespace std;

int main() {
    int numeros[10];
    int suma = 0;

    for (int i = 0; i < 10; i++) {
        cout<<"Numero "<<i + 1<<": ";
        cin>>numeros[i];
        suma += numeros[i];
    }

    cout<<"La suma es "<<suma<<endl;

    return 0;
}
