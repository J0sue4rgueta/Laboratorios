#include "iostream"
#include "cmath"
using namespace std;
const float PI = 3.14;

float getPI( float n ) {
    return n * PI;
}

int main(void)
{
    float radio, area, perimetro;

    cout << endl << "CALCULADOR DE AREA Y PERIMETRO DE UN CIRCULO" << endl << endl;

    cout << "Introduzca el radio del circulo: ";
    cin >> radio;

    area =  getPI(1) * pow(radio, 2);  
    perimetro =  2 * getPI(1) * radio;

    cout << "El valor del perimetro del circulo es: " << perimetro << endl;
    cout << "El valor del area del circulo es: " << area << endl;

    cout << endl;

    return 0;


}