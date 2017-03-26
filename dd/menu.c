#include <stdio.h>
#include <string.h>
#include "estructuras.h"

void clear_if_needed(char *str);
int validacion();

void menuPrincipal()
{
	char str[20];
	int opcion;
	int ok; //Para comprobar si sscanf me puede formatear o no lo introducido a un entero
	printf("Bienvenido a DeustoAirlines!\n");
	do
	{
		printf("Introduzca una de las siguientes opciones:\n");
		printf("1.- Crear trabajador\n");
		printf("2.- Log in\n");
		printf("3.- Crear vuelo\n");
		printf("4.- Cancelar vuelo\n");
		printf("5.- Consultar vuelos\n");
		printf("6.- Consultar trabajadores\n");
		printf("7.- Agenda de trabajo\n");
		printf("8.- Salir\n");
		scanf("%d", &opcion);
		switch(opcion)
		{

		}
	}while(ok==0 && (ok>0 && (opcion<1 || opcion>8)));
}

//
int validacion()
{
	int opcion;
	int DNI;
	int existe; //Sera 0 en caso de que el trabajador no exista en fichero
	do
	{
		printf("Bienvenido a DeustoAirlines, escoja como quiere conectarse\n");
		printf("1.- Log in\n");
		printf("2.- Registrarse\n");
		printf("3.- Salir\n");
		scanf("%i", &opcion);
		switch(opcion)
		{
			case 1:
				/*printf("Introduzca el DNI sin letra:\n");
				scanf("%i", &DNI);
				existe = existeTrabajador(DNI);
				if(existe == 0)
				{
					printf("El DNI introducido no corresponde a ningun trabajador\n");
				}
				break;*/
				printf("Ha intentado hacer log in\n");
				break;
			case 2:
				printf("Ha intentado registrarse\n");
				break;
			case 3:
				printf("Adios!\n");
				break;
			default:
				printf("La opcion introducida no corresponde a nada\n");
				break;
		}
	}while(opcion != 3);
	return DNI;
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