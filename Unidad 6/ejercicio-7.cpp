#include <iostream>

using namespace std;

int main() {
    int numeros[10];

    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            numeros [i-1] = 0;
        } else {
            numeros [i-1] = 1;
        }   
    }

    for (int j = 0; j < 10; j++) {
        cout<<numeros[j]<<" ";
    }
    
    return 0;
}