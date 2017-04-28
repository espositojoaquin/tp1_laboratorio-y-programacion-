#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED


typedef struct
{

    char nombre[50];
    int edad;
    int estado;
    int DNI;

}EPersona;




  EPersona ingresarPersona(int,int,char[]);
/**
 *
 * \param Verifica si el usuario ha sido ingresado
 * \return muestra los datos del usuario ingresado
 *
 */

 void mostrarGente(EPersona gente[], int per);
 /**

  * Datos del usuario
  * \param mustra los datos del usuario ingresado
  * \return los datos del usuario
  *
  */

 void mostrarPersonaIgresada(EPersona gente);

 /**
  * Verifica si hay espacio libre en el array
  * \param verifica el estado del usurio
  * \return espacio disponible
  *
  */

 int  EspacioLibre(EPersona gente[],int per);

 /**
  * inicialisa el estado del usurio en 0
  * \return el estado del usurio
  *
  */

 void inicializarRP(EPersona gente[],int gent);
 /**
  * Ordena afabateticamente los usurios registrados
  * \param compara los nombres de los usuarios
  * \return lista con usuarios ordenados alfabeticamente
  *
  */

 void ordenarPersonas(EPersona gente[],int gent);
 /**
  * muestra en un Grafico de barras a los usuarios
  * \param separa a los usurios por rango de edades
  * \return muestra el grafico de los usurios en el rango correspondiente segun su edad
  *
  */

 void grafico(EPersona gente[],int,int,int);

/**
 * Da de baja a un usurio previamente cargado
 * \param pregunta el DNI del usuario para indetificar que usuario deseamos dar de baja
 * \param muestra al usurio seleccionado para la baja
 * \param pregunta si esta seguro de querer eliminarlo,en caso contrario cancela la funcion
 * \return el usuario eliminado
 *
 */

 void eliminarPersona(EPersona[],int);



#endif // FUNCIONES_H_INCLUDED


