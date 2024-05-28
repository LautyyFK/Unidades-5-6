#include <iostream>

using namespace std;

int main() {

    int nroVendedores[16] = { 0 };
    int nroVendedor, Importe;

    cout<<"Numero de vendedor: ";
    cin>>nroVendedor;

    while (nroVendedor != 0) {
        cout<<"Importe de la venta $";
        cin>>Importe;
        
        nroVendedores[nroVendedor] += Importe;

        cout<<"Numero de vendedor: ";
        cin>>nroVendedor;
    }

    int importeMax = 0, impVendedorMax;
    int recaudacionTotal = 0;

    for (int i = 1; i <= 15; i++) {
        if (nroVendedores[i] > importeMax) {
            importeMax = nroVendedores[i];
            impVendedorMax = i;
        }

        recaudacionTotal += nroVendedores[i];
    }

    cout<<"Numero del vendedor que mas vendio "<<impVendedorMax<<endl;

    cout<<"Numero de vendedores sin ventas: "<<endl;
    for (int j = 1; j <= 15; j++) {
        if (nroVendedores[j] == 0) {
            cout<<"Vendedor Nro "<<j<<". ";
        }
    }

    cout<<endl;
    
    cout<<"El total recaudado es $"<<recaudacionTotal<<endl;

    return 0;
}