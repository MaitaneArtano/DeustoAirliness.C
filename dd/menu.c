#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "estructuras.h"


#define MAX_LENGTH 10
#define NUM_ELEMENTOS 2

void clear_if_needed(char *str);
int validacion();
int comprobarTrabajadorRegistrado(); //Devolvera 0 si no existe el trabajador y 1 si existe


int comprobarTrabajadorRegistrado( int DNI) //Devolvera 0 si no existe el trabajador y 1 si existe
{
	FILE *fichero;
	fichero = fopen("trabajador.txt", "r"); //No compruebo si el archivo existe o no porque si existiera no entraria en este metodo

	 char str[20];
	 while(fgets(str, 20, fichero)) //Hay que poner un numero maximo dependiend del programa
     {
    	int dni;
    	if(sscanf(str, "%d", &dni) == 0) //Si sscanf no puede darle formato de integer --> Señal de que no es un numero
    	{
     	 	printf("Not a number!\n");
   	    }
    	else
     	{
      		//Señal de que es un numero comparamos con el DNI introducido
      		if(dni == DNI)
      		{
      			printf("Trabajador encontrado\n");
      			return 1;
      		}else
      		{
      			printf("Trabajador no encontrado\n");
      			return 0;
      		}
    	}
    	clear_if_needed(str);
  }

  //cerrar fichero
  fclose(fichero);
}


int validacion()
{
	int opcion;
	int DNI;
	int correcto;
	int existe; //Sera 0 en caso de que el trabajador no exista en fichero
	char str[20];

	FILE *fichero;
	do
	{
		printf("Bienvenido a DeustoAirlines, escoja como quiere conectarse\n");
		printf("1.- Log in\n");
		printf("2.- Registrarse\n");
		printf("3.- Salir\n");
		scanf("%i", &opcion);
		switch(opcion)
		{
			case 1:
				fichero = fopen("trabajador.txt", "r");

				if ( fichero == NULL )
                    {
                      printf("No hay trabajadores registrados\n");
                    }

                   else
                    {
                    	do
                    	{
                    		printf("Introduzca el DNI del trabajador (sin letra):\n");
                    		fgets(str, 20, stdin);
                    		clear_if_needed(str);
                        	correcto = sscanf(str, "%d", &DNI);
                    	}while(correcto!=0);

                    	existe = comprobarTrabajadorRegistrado(DNI);//Se comprueba solo si el DNI existe o no
                    	if(existe == 0)
                    	{
                    		printf("El DNI introducido no corresponde a ningun trabajador\n");
                    	}
                    	else
                    	{
                    		printf("El DNI introducido corresponde al siguiente trabajador\n");
                    		//HACER METODO PARA DEVOLVER LA INFORMACION DEL TRABAJADOR
                    	}
                    }
				printf("Ha intentado hacer log in\n");
				break;
			case 2:
				printf("Ha intentado registrarse\n");
				break;
			case 3:
				printf("Adios!\n");
				break;
			default:
				printf("La opcion introducida no corresponde a nada\n");
				break;
		}
	}while(opcion != 3);
	return DNI;
}

//funcion SIN COMPROBAAAAR!!!
int comprobarUsuario(int DNI) //Devolvera 1 en caso de que el trabajador exista en el fichero
{
	FILE *file;
	char str[200];
	int DNI2;
	file = fopen("trabajador.txt", "r");
	if(file == 0)
	{
		printf("No hay trabajadores registrados\n");
	}else
	{
		printf("Comprobando trabajadores...\n");
		do
		{
			sscanf(str, "%i", DNI2);
        	if(DNI == DNI2)
        	{
        		//Señal de que ha encontrado en fichero un DNI igual
        	}
		}while(fgets(str, 200, file));
	}
}

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
		scanf("%d", &opcion);
		switch(opcion)
		{
			case 1:
			break;

			case 2:
			break;

			case 3:
			printf("Ha escogido crear un nuevo vuelo: \n");

			
			break;

		}
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