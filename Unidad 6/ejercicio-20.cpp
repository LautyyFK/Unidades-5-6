#include <iostream>

using namespace std;

int main() {
    int numerosA[5];
    int numerosB[5];

    for (int i = 0; i < 5; i++) {
        cout<<"Numero "<<i + 1<<": ";
        cin>>numerosA[i];
    }

    for (int j = 0; j < 5; j++) {
        cout<<"Numero "<<j + 1<<": ";
        cin>>numerosB[j];
    }

    int numerosC[10];
    int contVector = 0;

    for (int x = 0; x < 5; x++) {
        numerosC[contVector++] = numerosA[x];
        numerosC[contVector++] = numerosB[x];
    }   

    for (int k = 0; k < 10; k++) {
        cout<<numerosC[k]<<" ";
    }

    return 0;
}