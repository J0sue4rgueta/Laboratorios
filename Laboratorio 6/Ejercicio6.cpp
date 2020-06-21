#include "iostream" 
using namespace std;

void DefinirArreglo(int [ ], int);
void Frecuencia(int [], int n, int x);
int main(void)
{
    int i = 0, a[100], n = 0, x = 0;

    cout << "\nEJERCICIO 6\n\n";

    /*Define cuantos elementos tendran los arreglos*/
    cout << "De cuantos elementos sera el arreglo? ";
    cin >> n;

    /*Para poner un limite a la cantidad de elementos y para evitar que se use 0 y numeros negativos*/
    if (n > 100 || n < 1){
        cout << "\nLa cantidad de elementos no son validas, utilice numeros naturales menores de 100.";  
        cout << " El programa se suspendera.";

    } else {

        /*Define los elementos del arreglo*/    
        DefinirArreglo(a, n);

        /*Borra lo anterior y presenta el arreglo de forma ordenada(estetico)*/
        system("cls");

        cout << "\nEJERCICIO 6\n\n";

        cout << "Los elementos del arreglo son:\n";
        for(i = 0; i < n; i++)
        cout << a[i] << " ";
        cout << "\n\n";

        /*Se elige el numero que se quiere ver cuanto se repite*/
        cout << "De que numero busca la frecuencia? ";
        cin >> x;

        /*Calcula cuantas veces se repite el numero dado*/
        Frecuencia(a, n, x);

        
    }

    cout << "\n\n";
    return 0;
}   

/*Para darle los elementos elegidos por el usuario al arreglo*/
void DefinirArreglo(int a[ ], int n)
{   
    int i;

    cout << "\nDigite los " << n << " elementos del arreglo:\n";
    for(i = 0; i < n; i++)
    cin >> a[i];

    cout << endl;

}

/*Se calcula cuanto se repite el numero elegido*/
void Frecuencia(int a[], int n, int x)
{
    int i, f = 0;

    for ( i = 0; i < n; i++)
    {
        if (x == a[i])
        f++;        
        
    }
    
    cout << endl;

    if (f == 1)
    cout << "El numero " << x << " se repite " << f << " vez";
    
    else
    cout << "El numero " << x << " se repite " << f << " veces";

}