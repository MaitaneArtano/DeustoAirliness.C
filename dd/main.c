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

	printf("Introduzca el DNI del trabajador con el que quiere acceder (sin Letra):\n");
	fgets(str, 9, stdin);
	clear_if_needed(str);
	sscanf(str, "%d", &DNI);
	printf("El DNI introducido es: %d \n", DNI);
	existe = validacion(DNI);//Primer menu donde el trabajador introducira el DNI

	return 0;
}

