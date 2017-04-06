#include "funciones.h"

float ingresar1_operando(float num1)
{

  printf("A= ");
  scanf("%f",&num1);



    return num1;
}


float ingresar2_operando(float num2)
{
  printf("B= ");
  scanf("%f",&num2);


  return num2;

}


float suma(float A,float B)
{
    float total;
    total= A+B;
    printf("%2.f\n",total);
   return total;
}


float resta(float A,float B)
{
    float total;
    total= A-B;
    printf("%2.f\n",total);
   return total;
}



float division(float A,float B)
{
    float total;
    if(A==0||B==0)
    {
        printf("No se puede realizar la operacion si un operando es igual a 0\n");
    }
    else
    {
         total= (A / B );
         printf(" %.2f\n",total);
    }
    return total;
}


float multiplicacion(float A,float B)
{
    float total;
    total=(A*B);
    printf("%2.f\n",total);
    return total;
}



int factorial(int A)
{
    int numero= A;
    int i;
    int resultado= 1;

    if(A<0)
    {
        printf("Inrtoduzca un numero positivo para poder realizar esta operacion\n");
    }
    else
    {
        for(i=numero;i>0;i--)
        {
            resultado = resultado*i;
        }

     printf("%d\n",resultado);
    }



    return resultado;


}
