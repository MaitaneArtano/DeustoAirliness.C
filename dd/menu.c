#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "estructuras.h"


int validacion(int DNI);
int validacionVuelo(int cod_vuelo);


void menuPrincipal()
{
	int opcion;
	int ok; //Para comprobar si scanf me puede formatear o no lo introducido a un entero

	do
	{
		printf("\nIntroduzca una de las siguientes opciones:\n");
		printf("1.- Crear vuelo\n");
		printf("2.- Cancelar vuelo\n");
		printf("3.- Consultar vuelos\n");
		printf("4.- Consultar trabajadores\n");
		printf("5.- Asignar tarea a trabajador\n");
		printf("6.- Ver agenda de trabajo\n");
		printf("7.- Salir\n");
		scanf("%d", &opcion);
		switch(opcion)
		{
			case 1:
				printf("Ha escogido crear un nuevo vuelo. \n");
				IntroducirVuelo(); 
				break;


			case 2:
				printf("Ha escogido cancelar un vuelo.\n");
				break;

			case 3:
				printf("Ha escogido consultar los vuelos existentes. \n");
				LeerVuelos();
				break;

			case 4:
				printf("Ha escogido consultar los trabajadores existentes. \n");
				LeerTrabajadores();
				break;

			case 5:
				printf("Ha escogido asignar tarea a trabajador. \n");
				asignarTarea();
				break;

			case 6:
				printf("Ha escogido ver la lista de agenda de trabajo: \n" );
				break;
			case 7:
				printf("Adios!\n");
				break;

			default:
				printf("La opcion elegida es incorrecta\n");
				break;

		}
	}while(opcion!=7);
}

int validacion(int DNI)//Devuelve 1 en caso de que exista, -1 si no hay trabajadores y 0 si no coincide con ningun trabajador
{
	FILE *fichero;
	fichero = fopen("trabajador.txt", "r");
	char r[50];
	int DNI2; //El DNI que se lee desde el fichero
	if(fichero==NULL)
	{
		return -1; //Devuelve -1 como senyal de que no hay trabajadores registrados
	}else
	{
		while(fgets(r, 50, fichero))
		{

        	sscanf(r, "%d", &DNI2);
			if(DNI==DNI2)
			{
        		return 1; //En caso de que el DNI introducido coincida con el de algun trabajador      
        	}
     	}
		return 0; //En caso de que el DNI NO coincida con el de ningun trabajador
	}
}

int validacionVuelo(int cod_vuelo)//Devuelve 1 en caso de que exista, -1 si no hay trabajadores y 0 si no coincide con ningun trabajador
{
	FILE *fichero;
	fichero = fopen("vuelos.txt", "r");
	char r[50];
	int cod_vuelo2; //El DNI que se lee desde el fichero
	if(fichero==NULL)
	{
		return -1; //Devuelve -1 como senyal de que no hay vuelo registrados
	}else
	{
		while(fgets(r, 50, fichero))
		{

        	sscanf(r, "%d", &cod_vuelo2);
			if(cod_vuelo==cod_vuelo2)
			{
        		return 1; //En caso de que el DNI introducido coincida con el de algun vuelo      
        	}
     	}
		return 0; //En caso de que el DNI NO coincida con el de ningun vuelo
	}
}




