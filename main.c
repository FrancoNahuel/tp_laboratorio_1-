#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
   int operacion;
   do
    {
      printf("\n1- Suma\n");
      printf("2- Resta\n");
      printf("3- Multiplicacion\n");
      printf("4- Division\n");
      printf("5- Factorial\n");
      printf("6- Todas las operaciones");
      printf("7- Salir\n");
      scanf("%d",&operacion);
      switch(operacion)
      {
         case 1: suma();
         break;
         case 2: resta();
         break;
         case 3: multiplicacion();
         break;
         case 4: division();
         break;
         case 5: factorial();
         break;
         case 6: todasLasOperaciones();
         case 7:
         break;
         default: printf("Error. Ingrese una de las 6 opciones\n");
       }
   }
   while(operacion!=7);
   return 0;
}




