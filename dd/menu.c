#include <stdio.h>
#include <string.h>
#include "estructuras.h"

void clear_if_needed(char *str);

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
		fgets(str, 20, stdin);
		clear_if_needed(str);
		ok = sscanf(str, "%d", &opcion);
		printf("\n");
	}while(ok==0 && (ok>0 && (opcion<1 || opcion>8)));
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