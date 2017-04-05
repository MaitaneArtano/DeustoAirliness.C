#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "estructuras.h"

#define MAX_LENGTH 20

int asignarTarea();

 	
	

int asignarTarea()
{

	
 	int codigo=0;
	char str1[MAX_LENGTH];
	char DNI[9];
	char cod_vuelo[MAX_LENGTH];
	printf("Lista de trabajadores disponibles:\n");
	LeerTrabajadores();

	printf("Escriba el DNI del trabajador al que quieres asignar un puesto\n");
	 do
    {
        fgets(str1, 10, stdin);
        clear_if_needed(str1);
        sscanf(str1, "%s", &DNI);
    }while(codigo==0);


	printf("Lista de vuelos disponibles:\n");
	LeerVuelos(); 
	printf("Escriba el código del vuelo al que quieres asignar el trabajador\n");
	

	do
    {
        fgets(str1, MAX_LENGTH, stdin);
        clear_if_needed(str1);
        sscanf(str1, "%s", &cod_vuelo);
    }while(codigo==NULL);

 	printf("\n\n La persona y el vuelo seleccionados son: \n");
    printf("El DNI de la persona es: %s \n", DNI);  
    printf("El COD_VUELO del vuelo es: %s \n", cod_vuelo);


    return 0;


}