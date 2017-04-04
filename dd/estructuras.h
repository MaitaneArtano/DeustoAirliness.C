#ifndef _ESTRUCTURAS_H_
#define _ESTRUCTURAS_H_

typedef struct
{
	int DNI;
	
	char *nombre;
	char *apellido;
	char *puesto; 
}Trabajador;

typedef struct 
{
	char *origen;
	char *destino;
	char *fecha;
	float precio;
}Vuelo;

typedef struct 
{
	char *DNI;
	char *puesto;
}Tarea;

void menuPrincipal();
void clear_if_neededC (char *str);

#endif 