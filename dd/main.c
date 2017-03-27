#include <stdio.h>
#include "estructuras.h"
#include "menu.c"

int main(void)
{
	int existe;
	existe = validacion(); //Primer menu donde el trabajador debera registrarse o hacer login
	menuPrincipal();
	return 0;
}