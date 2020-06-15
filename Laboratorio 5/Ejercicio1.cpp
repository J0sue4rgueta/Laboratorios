#include "iostream" 
using namespace std;

int main(void)
{
   int x1 = 0, x2 = 0, residuo = 0, y1 = 0, y2 = 0;
   /*Portada*/
   cout << "\nCALCULADOR DE MCD CON EL METODO DE EUCLIDES\n\n";
   cout << "Introduzca el valor del primer numero: ";
   cin >> x1;
   cout << "Introduzca el valor del segundo numero: ";
   cin >> x2;

   /*Para evitar el error de sacar MCD de 0 y 0*/
   if (x1 == 0 && x2 == 0){
      cout << "\nEl MCD de 0 y 0 es: 0\n\n";
      return 0;
   
   }
   /*Para evitar un error al poner 0 en la segunda casilla, se intercambian los valores de x1 y x2*/
   if (x2 == 0)
   {
      y1 = x1;
      x1 = x2;
      x2 = y1;
   }
      
   /*Respaldo de datos*/
   y1 = x1;
   y2 = x2;

   /*Proceso para el MCD*/
   do
      {
         residuo = x1 % x2;
         if(residuo != 0)
         {
            x1 = x2;
            x2 = residuo;

         }
      }

   while(residuo != 0);
   
   /*Resultado*/
   cout << "\nEl MCD de " << y1 << " y " << y2 << " es: " << x2;
   cout << "\n\n";

   return 0;

}  


