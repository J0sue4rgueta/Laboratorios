#include "iostream"
using namespace std;

int main(void)
{
    string producto;
    int cantidad;
    float precio, Total;

    cout << endl << "CAJERO" << endl << endl;

    cout << "Introduzca el nombre del producto: ";
    cin >> producto;

    cout << "Introduza el precio del producto en dolares: ";
    cin >> precio;

    cout << "Introduza la cantidad: ";
    cin >> cantidad;

    Total = precio * cantidad; 

    cout << "El monto total es de: " << Total << endl;

    cout << endl;


    return 0;
}