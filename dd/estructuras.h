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
	int cod_vuelo;
	char *origen;
	char *destino;
	char *fecha;
	float precio;
}Vuelo;

typedef struct 
{
	int DNI;
	char *puesto;
}Tarea;

void menuPrincipal();
int validacion(int DNI);
int IntroducirVuelo(Vuelo *v1, int NUM_VUELOS);
int EscribirEnFicheroVuelo (Vuelo *v1, int total, char *nombre);
void clear_if_neededC (char *str);
void liberarMemoriaContacto(Vuelo *v, int NUM_VUELOS);

#endif 