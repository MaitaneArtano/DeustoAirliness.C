#ifndef ESTRUCTURAS_H_
#define ESTRUCTURAS_H_

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
int IntroducirVuelo();
void clear_if_needed(char *str);
void guardarEnFichero(int codigo, char *origen, char *destino, char *fecha, float precio);
void LeerVuelos();
void LeerTrabajadores();
int AsignarAgenda();

#endif 