#include "iostream"
using namespace std;

int main(void)
{
    int a = 0, b = 0;

    cout << endl << "Comprobador de numeros pares e impares" << endl << endl;

    cout << "Introduzca el valor del numero: ";
    cin >> a;
    

    b = a%2;

    if(b == 0)
    {
        cout << "El numero es par" << endl;

    }else{

        cout << "El numero es impar" << endl;
        
    }

    cout << endl;

    return 0;
}