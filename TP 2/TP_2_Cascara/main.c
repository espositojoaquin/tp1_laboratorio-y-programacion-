#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include <conio.h>
#include <string.h>
#define A 20


int main()
{
    EPersona gente[A];
    inicializarRP(gente,A);
    char seguir='s';
    int opcion=0;
    int i;
    char aux[20];
    //int flag=0;
    int DNI,edad,estado,Pos;
    char nombre[50];
   // int respuesta;
    int cont18=0;
    int cont19=0;
    int cont35=0;





    do
    {
        printf("\n1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n");

        printf("Elija una opcion: ");
        scanf("%d",&opcion);
        while(opcion<1||opcion>5)
        {
            printf("Elija una opcion valida: ");
            scanf("%d",&opcion);
        }




        switch(opcion)
        {
        case 1:


            Pos = EspacioLibre(gente,A);
            if(Pos==-1)
            {
                printf("No hay espacio disponible\n");


            }
            else
            {
                if(Pos!=-1)
                {


                    printf("\ningrese su nombre ");
                    fflush(stdin);
                    scanf("%s",&nombre);
                    printf("ingrese su docuento ");
                    fflush(stdin);
                    scanf("%d",&DNI);
                    for(i=0; i<A; i++)
                    {
                        while(DNI==gente[i].DNI)
                        {
                            printf("Este DNI ya fue registrado,ingrese uno valido ");
                            fflush(stdin);
                            scanf("%d",&DNI);
                        }

                    }
                    while(DNI>81000000||DNI<999999)
                    {
                        printf("ingrese un Documento valido ");
                        fflush(stdin);
                        scanf("%d",&DNI);

                    }


                    printf("ingrese su edad ");
                    fflush(stdin);
                    scanf("%d",&edad);
                    while(edad<1&&edad>120)
                    {
                        printf("introduzca una edad valida");
                        fflush(stdin);
                        scanf("%d",&edad);
                    }

                    gente[Pos]=ingresarPersona(DNI,edad,nombre);

                    mostrarPersonaIgresada(gente[Pos]);

                    if(edad<19)
                    {
                        cont18++;
                    }
                    else
                    {
                        if(edad<36&&edad>18)
                        {
                            cont19++;
                        }
                        else
                        {
                            cont35++;
                        }

                    }


                }

            }

            break;

        case 2:
            eliminarPersona(gente,A);


            break;
        case 3:
            ordenarPersonas(gente,A);

            mostrarGente(gente,A);
            break;
        case 4:
            grafico(gente[i].edad,cont18,cont19,cont35);


            break;
        case 5:
            seguir = 'n';
            break;

        }
    }
    while(seguir=='s');

    return 0;
}



