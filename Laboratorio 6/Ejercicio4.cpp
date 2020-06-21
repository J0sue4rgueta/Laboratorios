#include "iostream" 
using namespace std;

void DefinirArreglo(int [ ], int);
void DefinirSuma(int [ ], int [ ], int [ ], int);
void ImprimirArreglo(int [ ], int);

int main(void)
{
    int i= 0, a[100], b[100], c[100], n = 0;

    cout << "\nEJERCICIO 4\n\n";

    /*Define cuantos elementos tendran los arreglos*/
    cout << "De cuantos elementos seran los arreglos? ";
    cin >> n;

    /*Para poner un limite a la cantidad de elementos y para evitar que se use 0 y numeros negativos*/
    if (n > 100 || n < 1){
        cout << "\nLa cantidad de elementos no son validas, utilice numeros naturales menores de 100.";  
        cout << " El programa se suspendera.";

    }else {
        /*Le asigna los elementos al primer arreglo*/
        cout << "\nDigite los " << n << " elementos del primer arreglo:\n";
        DefinirArreglo(a, n);

        /*Le asigna los elementos al segundo arreglo*/
        cout << "Digite los " << n << " elementos del segundo arreglo:\n";
        DefinirArreglo(b, n);

        /*Borra lo anterior y presenta los arreglos ordenados(estetico)*/
        system("cls");

        cout << "\nEJERCICIO 4\n\n";

        cout << "Los elementos del primer arreglo son:\n";
        for(i = 0; i < n; i++)
        cout << a[i] << " ";
        cout << "\n\n";
        
        cout << "Los elementos del segundo arreglo son:\n";
        for(i = 0; i < n; i++)
        cout << b[i] << " ";
        cout << endl;

        /*Le asigna los elementos al tercer arreglo*/
        DefinirSuma(c, a, b, n);
        ImprimirArreglo(c, n);

    }

    cout << "\n\n";
    return 0;

}

/*Le asigna los elementos dados por el usuario al arreglo*/
void DefinirArreglo(int x[ ], int n)
{   
    int i;

    for(i = 0; i < n; i++)
    cin >> x[i];

    cout << endl;

}

/*Suma los elementos de los dos arreglos y se los asigna un tercer arreglo*/
void DefinirSuma(int x[ ], int a[ ], int b[ ], int n)
{
    int i;

    for(i = 0; i < n; i++)
    x[i] = a[i] + b[i];
      
}

/*Muestra en la consola los elementos del tercer arreglo*/
void ImprimirArreglo(int x[ ], int n)
{
    int i;

    cout << "\nLos elementos del arreglo, sumando los anteriores, son:\n";

    for(i = 0; i < n; i++)
    cout << x[i] << " ";
    
}