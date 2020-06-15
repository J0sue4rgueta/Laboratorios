#include "iostream"
using namespace std;
/*Para que la hora quede con dos digitos (00:00:00)*/
void DosDigitos()
{
    cout.fill  ('0');    
    cout.width ( 2 );

}


int main(void)
{
    int hora = 0, min = 0, seg = 0;

    /*Portada*/
    cout << "\nRELOJ CON AUMENTO DE 1 SEG\n\n";

    cout << "Introduzca la hora (24h): ";
    cin >> hora;
    cout << "Introduzca el minuto: ";
    cin >> min;
    cout << "Introduzca el segundo: ";
    cin >> seg;

    /*Proceso de aumento del dia*/
    seg++;
    if (seg > 59 ){
    seg = 00;
    min++; 
    }
    if (min > 59 ){
    min = 00;
    hora++; 
    }
    if (hora > 23 )
    hora = 00;
    
    /*Respuesta*/
    cout << "La hora con aumento de un segundo es: ";
    DosDigitos();
    cout << hora << ":";
    DosDigitos();
    cout << min << ":";
    DosDigitos();
    cout << seg;
    
    cout << "\n\n";
    return 0;
   

}