
#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include <conio.h>
#include <string.h>
#define A 20



EPersona ingresarPersona(int DNI,int edad,char nombre[])
{
int estado;
EPersona gente;
gente.DNI=DNI;
strcpy(gente.nombre,nombre);
gente.edad=edad;
gente.estado=1;




return gente;
}
void mostrarGente(EPersona gente[], int per)
{
    int i;
    for(i=0;i<per;i++)
    {
        if(gente[i].estado!=0)
        {
            mostrarPersonaIgresada(gente[i]);
        }
    }
}

void mostrarPersonaIgresada(EPersona gente)
{
    printf("\n%s\t%d\t%d\n",gente.nombre,gente.DNI,gente.edad);
}

int  EspacioLibre(EPersona gente[],int per)
{
    int i;
    int lug= -1 ;
    for(i=0;i<per;i++)
    {
       if(gente[i].estado==0)
       {
           lug=i;
           break;
       }
    }
    return lug;
}

void inicializarRP(EPersona gente[],int gent)
{
    int i;
    for(i=0;i<gent;i++)
    {
        gente[i].estado=0;
    }

}

 void ordenarPersonas(EPersona gente[],int gent)
 {

     int i,k;
  EPersona auxP;
     for(i=0;i<gent-1;i++)
     {
         for(k=i+1;k<gent;k++)
         {
             if(strcmp(gente[i].nombre,gente[k].nombre)>0)
             {
                auxP=gente[i];
                gente[i]=gente[k];
                gente[k]=auxP;

             }



         }

     }
 }
void grafico(EPersona gente[],int cont18,int cont19, int cont35)
 {
     int mayor;
     int flag1=0;
     int i;


    if(cont18>=cont19&&cont18>=cont35)
     {
         mayor=cont18;
     }

   else
    {
         if(cont19>=cont18&&cont19>=cont35)
         {
             mayor=cont19;
         }
         else
         {

            mayor=cont35;
         }
    }

     for(i=mayor;i>0;i--)
     {
         if(i<10)
         {
             printf("%02d|",i);
         }
         else
         {
             printf("%02d|",i);
         }

         if(i<=cont18)
         {
             printf("*");
         }
         if(i<=cont19)
         {
             flag1=1;
             printf("\t*");
         }
         if(i<=cont35)
         {
             if(flag1==0)
             {
                 printf("\t\t*");
             }
             else
             {
                 if(flag1==1)
                 {
                     printf("\t*");
                 }
             }
         }
         printf("\n");
     }


       printf("--+-----------------");
       printf("\n |<18\t19-35\t>35");
 }



void eliminarPersona (EPersona gente[],int tam)
{
    int i;
    int flagC;
    int aux;
    char respuesta;

                        flagC=0;




                        printf("Ingrese el DNI de la persona que desea eliminar ");
                        fflush(stdin);
                        scanf("%d",&aux);
                    for(i=0;i<tam;i++)
                    {
                        if(gente[i].estado==1&&aux==gente[i].DNI)
                        {
                           mostrarPersonaIgresada(gente[i]);

                            printf("Usted esta seguro de querer elimilarlo ??\n");
                            respuesta=getch();
                            if(respuesta=='s')
                            {
                                gente[i].estado=0;
                                printf("\nEl usuario ha sido eliminado\n");
                            }
                            else
                            {
                                printf("\nCancelado por el usuario\n");

                            }

                             flagC=1;
                             break;

                        }

                    }
                    if(flagC==0)
                    {
                        printf("El usuario solicitado jamas fue cargado en este sistema ");
                    }



}




