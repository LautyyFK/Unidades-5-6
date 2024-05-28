#include <iostream>

using namespace std;

int main() {
    
    int nroArticulo, cantVend;
    int ventasTotalesArt[21] = { 0 };

    cout<<"Numero de sucursal: ";
    cin>>nroArticulo;
    
    while (nroArticulo != 0) {
        cout<<"Cantidad Vendida: ";
        cin>>cantVend;

        ventasTotalesArt[nroArticulo] += cantVend;  

        cout<<"Numero de sucursal: ";
        cin>>nroArticulo;
    }

    int cantMax = 0, artMax;

    for (int i = 1; i <= 20; i++) {
        if (ventasTotalesArt[i] > cantMax) {
            cantMax = ventasTotalesArt[i];
            artMax = i;
        } 
    }

    cout<<"La sucursal con mas ventas es "<<artMax<<endl;

    cout<<"Sucursales sin ventas: ";

    for (int j = 1; j <= 20; j++) {
        if (ventasTotalesArt[j] == 0) {
            cout<<"Suc "<<j<<". ";
        }
    }

    cout<<endl;

    cout<<"Ventas del numero de articulo 10: "<<ventasTotalesArt[10]<<endl;

    return 0;
}