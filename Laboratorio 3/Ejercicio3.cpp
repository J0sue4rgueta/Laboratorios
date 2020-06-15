#include "iostream"
#include "cmath"
using namespace std;

int main(void)
{
    float a, b, c, x1, x2;

    cout << endl << "CALCULADOR DE FORMULA GENERAL" << endl << endl;

    cout << "Introduzaca el valor de a: ";
    cin >> a;

    cout << "Introduzaca el valor de b: ";
    cin >> b;

    cout << "Introduzaca el valor de c: ";
    cin >> c;
 
    x1 = (- b + sqrt( pow(b, 2) - (4 * a * c) ) ) / (2 * a);
    x2 = (- b - sqrt( pow(b, 2) - (4 * a * c) ) ) / (2 * a);

    cout << "Las respuestas son: " << endl;
    cout << "x1: " << x1 << endl << "x2: " << x2 << endl;

    cout << endl;

    return 0;

}