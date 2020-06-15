#include "iostream"
#include "string"
using namespace std;

int main(void)
{
    string palabra = "";
    int longitud = 0;

    cout << endl << "Comprobador de posicion de caracteres" << endl << endl;

    cout << "Introduzca una palabra: ";
    cin >> palabra;
    cout << endl;

    longitud = palabra.length() - 1;
    char inicial = palabra[0], final = palabra[longitud];

    if (inicial == final)
    {
        cout << "La primera letra y la ultima son iguales (la letras es "  << inicial << ")"<< endl;

    }else{

        cout << "La primera letra y la ultima NO son iguales (las letras son ";
        cout << inicial << " como primera letra y " << final << " como ultima letra)" << endl;

    }

    cout << endl;    
    return 0;
}