#include "iostream"
using namespace std;

int main(void)
{
    int a, b, c, total;

    cout << endl << "GENERADOR DE PROMEDIOS" << endl << endl;

    cout << "Primero numero: ";
    cin >> a;

    cout << "Segundo numero: ";
    cin >> b;

    cout << "Tercer numero: ";
    cin >> c;

    total = (a + b + c)/3;
    cout << "El promedio es: " << total << endl;

    cout << endl;
    

    return 0;

}
