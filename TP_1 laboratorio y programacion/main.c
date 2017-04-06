#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    float operando1;
    float operando2;
    int flag=0;
    int flag1=0;
    float sum;
    float res;
    float div;
    float mul;
    int fact;



    while(seguir=='s')
    {    if(flag==1&&flag1==0)
        {


            printf("\n 1- Ingresar 1er operando: %.2f\n",operando1);
            printf("2- Ingresar 2do operando:(B=y)\n");
            printf("3- Calcular la suma (A+B)\n");
            printf("4- Calcular la resta (A-B)\n");
            printf("5- Calcular la division (A/B)\n");
            printf("6- Calcular la multiplicacion (A*B)\n");
            printf("7- Calcular el factorial (A!)\n");
            printf("8- Calcular todas las operacione\n");
            printf("9- Salir\n");

            printf("ingrese una opcion: ");
            scanf("%d",&opcion);
        }
            else
            {
                if(flag1==1&&flag==0)
                {
                printf("\n 1- Ingresar 1er operando: (A=X)\n");
                printf("2- Ingresar 2do operando: %.2f\n",operando2);
                printf("3- Calcular la suma (A+B)\n");
                printf("4- Calcular la resta (A-B)\n");
                printf("5- Calcular la division (A/B)\n");
                printf("6- Calcular la multiplicacion (A*B)\n");
                printf("7- Calcular el factorial (A!)\n");
                printf("8- Calcular todas las operacione\n");
                printf("9- Salir\n");
                printf("ingrese una opcion: ");
                scanf("%d",&opcion);
                }
                else
                {
                    if(flag==1&&flag1==1)
                    {
                printf("\n 1- Ingresar 1er operando: %.2f\n",operando1);
                printf("2- Ingresar 2do operando: %.2f\n",operando2);
                printf("3- Calcular la suma (A+B)\n");
                printf("4- Calcular la resta (A-B)\n");
                printf("5- Calcular la division (A/B)\n");
                printf("6- Calcular la multiplicacion (A*B)\n");
                printf("7- Calcular el factorial (A!)\n");
                printf("8- Calcular todas las operacione\n");
                printf("9- Salir\n");
                printf("ingrese una opcion: ");
                scanf("%d",&opcion);
                    }
                    else
                    {
                        printf("\n 1- Ingresar 1er operando: (A=X)\n");
                        printf("2- Ingresar 2do operando: (B=y)\n");
                        printf("3- Calcular la suma (A+B)\n");
                        printf("4- Calcular la resta (A-B)\n");
                        printf("5- Calcular la division (A/B)\n");
                        printf("6- Calcular la multiplicacion (A*B)\n");
                        printf("7- Calcular el factorial (A!)\n");
                        printf("8- Calcular todas las operacione\n");
                        printf("9- Salir\n");
                        printf("ingrese una opcion: ");
                        scanf("%d",&opcion);

                    }

                }

                if(opcion<1||opcion>9)
                {
                    printf("Introduzca una opcion valida (1-9)\n");

                }

            }

        switch(opcion)
        {
            case 1:
                operando1=ingresar1_operando(operando1);
                flag=1;
                break;
            case 2:
                operando2=ingresar2_operando(operando2);
                flag1=1;
                break;
            case 3:  if(flag==0&&flag1==0)
                      {
                          printf("Por favor introduzca valores para poder realizar esta operacion\n");
                      }
                      else
                       {
                           if(flag1==0||flag==0)
                           {
                             printf( "Introduzca el operando faltante para realizar esta operacion\n");
                           }
                           else
                           {
                                sum=suma(operando1,operando2);
                           }
                       }

                break;
            case 4:
                 if(flag==0&&flag1==0)
                      {
                          printf("Por favor introduzca valores para poder realizar esta operacion\n");
                      }

                         else
                       {
                           if(flag1==0||flag==0)
                           {
                             printf( "Introduzca el operando faltante para realizar esta operacion\n");
                           }
                           else
                            {
                                res=resta(operando1,operando2);
                            }

                        }
                break;
            case 5:
                if(flag==0&&flag1==0)
                      {
                          printf("Por favor introduzca valores para poder realizar esta operacion\n");
                      }

                       else
                       {
                           if(flag1==0||flag==0)
                           {
                             printf( "Introduzca el operando faltante para realizar esta operacion\n");
                           }
                           else
                           {
                                div=division(operando1,operando2);
                           }

                       }

                break;
            case 6:
                 if(flag==0&&flag1==0)
                      {
                          printf("Por favor introduzca valores para poder realizar esta operacion\n");
                      }


                      else
                       {
                           if(flag1==0||flag==0)
                           {
                             printf( "Introduzca el operando faltante para realizar esta operacion\n");
                           }
                           else
                           {
                               mul=multiplicacion(operando1,operando2);
                           }

                       }
                break;
            case 7:      if(flag==0&&flag1==0)
                      {
                          printf("Por favor introduzca un valor para poder realizar esta operacion\n ");
                      }


                           else
                       {
                           if(flag1==1)
                           {
                             printf( "Introduzca solamente el operando uno para poder realizar esta operacion\n");
                           }
                           else
                           {
                                 fact=factorial(operando1);
                           }


                      }

                break;
            case 8:  if(flag==0&&flag1==0)
                      {
                          printf("Por favor introduzca valores para poder realizar estas operaciones\n");
                      }

                      else
                       {

                           if(flag1==0||flag==0)
                               {
                                 printf( "Introduzca el operando faltante para realizar estas operaciones\n");
                               }
                               else
                               {
                                    sum=suma(operando1,operando2);

                                    res=resta(operando1,operando2);

                                    div=division(operando1,operando2);

                                    mul=multiplicacion(operando1,operando2);


                               }
                                if(flag1==1)
                                       {
                                         printf( "Introduzca solamente el operando uno para poder realizar esta operacion\n");
                                       }
                                       else
                                       {
                                           fact=factorial(operando1);
                                       }
                        }


                break;
            case 9:
                seguir = 'n';
                break;
        }



    }


    return 0;
}

