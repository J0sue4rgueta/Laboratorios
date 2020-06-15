#include "iostream"
using namespace std;
/*Para que el dia y mes quede con dos digitos (00 - 00)*/
void DosDigitos()
{
    cout.fill  ('0');    
    cout.width ( 2 );

}

int main(void)
{
    int year = 0, month = 0, day = 0, comp1 = 0, comp2 = 0;

    /*Portada*/
    cout << "\nFECHA CON UN DIA AGREGADO\n\n";

    cout << "Introduzca el dia: ";
    cin >> day;
    cout << "Introduzca el mes: ";
    cin >> month;
    cout << "Introduzca el "; 
    printf("a%co",164); // Para poner ñ
    cout << ": ";
    cin >> year;
    
    /*Para evitar usar fechas imposibles*/
    if (month > 12 || month < 1 || year < 0 || day < 1)
    {
        cout << "\nError al digitar, por favor revisar bien la fecha\n\n";
        return 0;
    }

    /*Proceso de aumento de un dia*/
    day++;
    switch (month)
    {
        /*Para los meses con 31 dias*/
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if (day > 32) //Por si ponen fechas imposibles
            {
                cout << "\nError al digitar, por favor revisar bien la fecha\n\n";
                return 0;

            } else if (day == 32 )
            {
                day = 01;
                month++; 
            }
            break;
                
        case 4:
        case 6:
        case 9:
        case 11:
            if (day > 31 ) //Por si ponen fechas imposibles
            {
                cout << "\nError al digitar, por favor revisar bien la fecha\n\n";
                return 0;

            } else if (day == 31)
            {
                day = 01;
                month++; 
            }
            break;
        
        case 2:
            if (day > 30 ) //Por si ponen fechas imposibles
            {
                cout << "\nError al digitar, por favor revisar bien la fecha\n\n";
                return 0;
            }
            /*Primer proceso de descarte de año bisiesto*/
            comp1 = year%400;
            if (comp1 == 0)
            {
                if (day > 29 )
                {
                    day = 01;
                    month++; 
                } 
            }
            /*Segundo proceso de descarte de año bisiesto*/
            comp1 = year%4; 
            comp2 = year%100;
            if (comp1 == 0 && comp2 != 0) 
            {
                if (day > 29 )
                {
                    day = 01;
                    month++; 
                } 
            } else { //Por si ponen fechas imposibles
                cout << "\nError al digitar, por favor revisar bien la fecha\n\n";
                return 0;
            
            }
            break;

    }
    /*Proceso de aumento de un mes*/
    if (month > 12 )
        {
            month = 01;
            year++;
        }
    
    /*Respuesta*/
    cout << "\nLa fecha con el dia agragado es: ";
    DosDigitos();
    cout << day << "-";
    DosDigitos();
    cout << month << "-";
    cout << year;
    
    cout << "\n\n";
    return 0;
   
}