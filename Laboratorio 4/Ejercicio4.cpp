#include "iostream"
#include "string"
using namespace std;

int main(void)
{
    string palabra = "";
    int longitud = 0, comprobante = 0;

    cout << endl << "Comprobador de numero de caracteres" << endl << endl;

    cout << "Introduzca una palabra: ";
    cin >> palabra;
    cout << endl;

    longitud = palabra.length();
    if (longitud > 10) 
    {
       cout << "La palabra introducida tiene mas de 10 caracteres (en total tiene ";
       cout << longitud << " caracteres)" << endl;

    }else if (longitud < 10) {

       cout << "La palabra introducida tiene menos de 10 caracteres (en total tiene ";
       cout << longitud << " caracteres)" << endl;

    }else{

       cout << "La palabra introducida tiene 10 caracteres" << endl;

    }

    comprobante = longitud%2;
    if (comprobante == 0) 
    {
       cout << "La cantidad de caracteres es par" << endl;

    }else{

       cout << "La cantidad de caracteres es impar" << endl;

    }

    cout << endl;
    return 0;

}