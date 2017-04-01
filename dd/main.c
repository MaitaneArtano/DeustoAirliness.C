#include <stdio.h>
#include "estructuras.h"
#include "menu.c"
#include <string.h>
#include <stdlib.h>

int main(void)
{
	menuPrincipal();
	int existe;
	existe = validacion();//Primer menu donde el trabajador debera registrarse o hacer login
	
	
	return 0;
}// 