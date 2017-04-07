#include <stdio.h>
#include "estructuras.h"
#include <string.h>
#include <stdlib.h>

#define MAX_LEN 9

int main(void)
{
	int existe;
	int DNI;
	char str[MAX_LEN];

	printf("Bienvenido a DeustoAirlines!\n");
	printf("Introduzca el DNI del trabajador con el que quiere acceder (sin Letra):\n");
	fgets(str, MAX_LEN, stdin);
	clear_if_needed(str);
	sscanf(str, "%d", &DNI);
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

void clear_if_needed(char *str)
{

    if (str[strlen(str) - 1] != '\n'){
        int c;
        while ((c = getchar()) != EOF && c != '\n');
    }
}

