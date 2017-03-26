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
int validacion();
int comprobarUsuario(); //Devolvera 1 en caso de que el trabajador exista en el fichero

#endif 