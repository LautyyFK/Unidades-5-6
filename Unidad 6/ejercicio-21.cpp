#include <iostream>

using namespace std;

int main() {
    int edad;
    int decadas[10] = { 0 };
    int decada;

    for (int j = 0; j < 10; j++) {
        cout<<"Edad N"<<j + 1<<": ";
        cin>>edad;

        decada = edad / 10;

        decadas[decada]++;
    }

    for(int k = 0; k < 10; k++) {
        cout<<"Decada "<<k<<" Cantidad de encuestados: "<<decadas[k]<<endl;
    }
    
    return 0;
}