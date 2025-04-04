#include <iostream>
using namespace std;
//
int main() {
    int ingresos;
    char estado;

    cout << "Ingrese sus ingresos anuales: ";
    cin >> ingresos;

    cout << "Ingrese su estado civil (soltero o casado): ";
    cin >> estado;

    if (ingresos<50000) {
        if (estado=='soltero') {
            cout << "Debe pagar el 10% de impuestos.";
        }
        else {
            cout << "Debe pagar el 8% de impuestos.";
        }
    }
    else if (ingresos<100000) {
        if (estado=='soltero') {
            cout << "Debe pagar el 20% de impuestos.";
        }
        else {
            cout<<"Debe pagar el 15% de impuestos.";
        }
    }


            return 0;

    }
