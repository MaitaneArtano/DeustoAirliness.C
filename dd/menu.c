#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "estructuras.h"


#define MAX_LENGTH 10
#define NUM_ELEMENTOS 2

void clear_if_needed(char *str);
int validacion(int DNI);


void menuPrincipal()
{
	char str[20];
	int opcion;
	int ok; //Para comprobar si scanf me puede formatear o no lo introducido a un entero
	printf("Bienvenido a DeustoAirlines!\n");
	do
	{
		printf("Introduzca una de las siguientes opciones:\n");
		printf("1.- Crear vuelo\n");
		printf("2.- Cancelar vuelo\n");
		printf("3.- Consultar vuelos\n");
		printf("4.- Consultar trabajadores\n");
		printf("5.- Agenda de trabajo\n");
		printf("6.- Salir\n");
		scanf("%d", &opcion);
		switch(opcion)
		{
			case 1:
				printf("Ha escogido crear un nuevo vuelo. \n");
				break;

			case 2:
				printf("Ha escogido cancelar un vuelo.\n");
				break;

			case 3:
				printf("Ha escogido consultar los vuelos existentes. \n");
				break;

			case 4:
				printf("Ha escogido consultar los trabajadores existentes. \n");
				break;

			case 5:
				printf("Ha escogido consultar la agenda de trabajo de los trabajadores. \n");
				break;

			case 6:
				printf("Adios!\n");
				break;

			default:
				printf("La opcion elegida es incorrecta\n");
				break;

		}
	}while(opcion!=6);
}

int validacion(int DNI)
{
	printf("Dentro de validacion el DNI recibido es: %d \n", DNI);
	FILE *fichero;
	fichero = fopen("trabajador.txt", "r");
	if(fichero==NULL)
	{
		printf("No hay trabajadores registrados\n");
		return -1; //Devuelve -1 como senyal de que no hay trabajadores registrados

	}else
	{

	}
}


/**
	Esta funcion elimina los caracteres pendientes si es necesario
	Se usa junto con fgets para leer la entrada hasta cierta longitud
*/
void clear_if_needed(char *str)
{
	if (str[strlen(str) - 1] != '\n')
	{
		int c;    
    	while ( (c = getchar()) != EOF && c != '\n');
    }
}