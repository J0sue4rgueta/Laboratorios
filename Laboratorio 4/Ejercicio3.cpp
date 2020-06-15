#include "iostream"
using namespace std;

int main(void)
{
    int a = 0;

    cout << endl << "Comprobador de numeros positivos y negativos" << endl << endl;

    cout << "Introduzca el valor del numero: ";
    cin >> a;

    if (a < 0) 
    {
        cout << "El numero es negativo" << endl;

    }else if (a > 0){

        cout << "El numero es positivo" << endl;

    }else{    
        
        cout << "El numero es cero" << endl;

    }
    
    cout << endl;
    return 0;
}