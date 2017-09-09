#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED


void suma()
{
   float primerNumero;
   float segundoNumero;
   float resultado;
   printf("Ingrese el primer numero\n");
   scanf("%f",&primerNumero);
   printf("Ingrese el segundo numero\n");
   scanf("%f",&segundoNumero);
   resultado = primerNumero+segundoNumero;
   printf(" El resultado de la suma es: %f\n",resultado);
}
void resta()
{
   float primerNumero;
   float segundoNumero;
   float resultado;

   printf("Ingrese el primer numero\n");
   scanf("%f",&primerNumero);
   printf("Ingrese el segundo numero\n");
   scanf("%f",&segundoNumero);
   resultado= primerNumero-segundoNumero;
   printf(" El resultado de la resta es: %f\n",resultado);
}
void multiplicacion()
{
   float primerNumero;
   float segundoNumero;
   float resultado;
   printf("Ingrese el primer numero\n");
   scanf("%f",&primerNumero);
   printf("Ingrese el segundo numero\n");
   scanf("%f",&segundoNumero);
   resultado= primerNumero*segundoNumero;
   printf(" El resultado de la multiplicacion es: %f\n",resultado);
}
void division()
{
   float primerNumero;
   float segundoNumero;
   float resultado;
   printf("Ingrese el primer numero\n");
   scanf("%f",&primerNumero);
   do
   {
   printf("Ingrese el segundo numero(que sea diferente a cero)\n");
   scanf("%f",&segundoNumero);
   resultado= primerNumero/segundoNumero;
   }
   while(segundoNumero==0);

   printf(" El resultado de la division es: %f\n",resultado);
}
void factorial()
{
    float primerNumero;
    float contador;
    float factorial=1;

    printf("Ingrese el numero a factoriar\n ");
    scanf("%f", &primerNumero);

    for (contador = 1; contador <= primerNumero; contador ++)
     {

     factorial = factorial * contador;
    }

    printf ("El numero factoriado es: %f",factorial);
}
void todasLasOperaciones()
{
    float primerNumero;
    float segundoNumero;
    float resultado;
    float suma;
    float resta;
    float division;
    float multiplicacion;
    float factorial ;
    float resultadoSuma;
    float resultadoResta;
    float resultadoDivision;
    float resultadoMultiplicacion;
    float numeroFactoriado=1;
    float contador;


   printf("Ingrese el primer numero\n");
   scanf("%f",&primerNumero);
   printf("Ingrese el segundo numero(que sea diferente a cero)\n");
   scanf("%f",&segundoNumero);

   resultadoSuma = primerNumero+segundoNumero;
   printf(" El resultado de la suma es: %f\n",resultadoSuma);

   resultadoResta= primerNumero-segundoNumero;
   printf(" El resultado de la resta es: %f\n",resultadoResta);

   resultadoMultiplicacion= primerNumero*segundoNumero;
   printf(" El resultado de la multiplicacion es: %f\n",resultadoMultiplicacion);

   do
   {


   resultadoDivision= primerNumero/segundoNumero;
   }
   while(segundoNumero==0);

   printf(" El resultado de la division es: %f\n",resultadoDivision);



    for (contador = 1; contador <= primerNumero; contador ++)
     {

     numeroFactoriado = numeroFactoriado * contador;
    }

    printf ("El primer numero factoriado es: %f",numeroFactoriado);
}





#endif // FUNCIONES_H_INCLUDED
