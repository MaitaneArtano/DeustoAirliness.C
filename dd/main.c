#include <stdio.h>
#include "estructuras.h"
#include "menu.c"
#include <string.h>
#include <stdlib.h>


int main(void)
{
	int existe;
	int DNI;
	char str[9];

	printf("Bienvenido a DeustoAirlines!\n");
	printf("Introduzca el DNI del trabajador con el que quiere acceder (sin Letra):\n");
	fgets(str, 9, stdin);
	clear_if_needed(str);
	sscanf(str, "%d", &DNI);
	printf("El DNI introducido es: %d \n", DNI);
	existe = validacion(DNI);//Devuelve 1 en caso de que exista, -1 si no hay trabajadores y 0 si no coincide con ningun trabajador
	if(existe==0)
	{
		printf("El trabajador no coincide con ningun trabajador\n");
	}if(existe==-1)
	{
		printf("No hay trabajadores\n");
		return -1;
	}if(existe==1)
	{
		printf("\nTrabajador encontrado con DNI %d \n\n", DNI);
		menuPrincipal();
	}

	return 0;
}

