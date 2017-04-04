#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "estructuras.h"
#include "vuelo.c"

#define NUM_VUELOS 30
#define MM 30

int validacion(int DNI);


void menuPrincipal()
{
	Vuelo v[NUM_VUELOS];
	char str[MM];
	int opcion;
	int ok; //Para comprobar si scanf me puede formatear o no lo introducido a un entero
	do
	{
		printf("\nIntroduzca una de las siguientes opciones:\n");
		printf("1.- Crear vuelo\n");
		printf("2.- Cancelar vuelo\n");
		printf("3.- Consultar vuelos\n");
		printf("4.- Consultar trabajadores\n");
		printf("5.- Agenda de trabajo\n");
		printf("6.- Salir\n");
		scanf("%d", &opcion);
		switch(opcion)
		{
			case 1:
				printf("Ha escogido crear un nuevo vuelo. \n");
				IntroducirVuelo(&v[1], NUM_VUELOS); //&v[0], 0

				break;


			case 2:
				printf("Ha escogido cancelar un vuelo.\n");
				break;

			case 3:
				printf("Ha escogido consultar los vuelos existentes. \n");
				break;

			case 4:
				printf("Ha escogido consultar los trabajadores existentes. \n");
				break;

			case 5:
				printf("Ha escogido consultar la agenda de trabajo de los trabajadores. \n");
				break;

			case 6:
				printf("Adios!\n");
				break;

			default:
				printf("La opcion elegida es incorrecta\n");
				break;

		}
	}while(opcion!=6);
}

int validacion(int DNI)//Devuelve 1 en caso de que exista, -1 si no hay trabajadores y 0 si no coincide con ningun trabajador
{
	printf("Dentro de validacion el DNI recibido es: %d \n", DNI);
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

