#include "iostream"
using namespace std;

int main(void)
{
    int a = 0, b = 0, c = 0;

    cout << endl << "Comprobador de numeros divisibles" << endl << endl;

    cout << "Introduzca el valor del dividendo: ";
    cin >> a;
    cout << "Introduzca el valor del divisor: ";
    cin >> b;

    c = a%b;

    if(c == 0)
    {
        cout << "Los numeros son divisibles" << endl;

    }else{

        cout << "Los numeros NO son divisibles" << endl;
        
    }

    cout << endl;

    return 0;
}