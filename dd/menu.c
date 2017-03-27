#include <stdio.h>
#include <string.h>
#include "estructuras.h"

#define MAX_LENGTH 10
#define NUM_ELEMENTOS 2

void clear_if_needed(char *str);
int validacion();
int comprobarUsuario(); //Devolvera 1 en caso de que el trabajador exista en el fichero
void comprobarTrabajadorRegistrado();



void comprobarTrabajadorRegistrado(Trabajador *Trabajador, int total)
{

	 // SE COMPRUEBA EL NOMBRE DEL TRABAJADOR

	char str[MAX_LENGTH];
    char frmt_str[MAX_LENGTH];

    char DNI[10];

    //GALDETU HAU!
    printf("");
    fgets(str, MAX_LENGTH, stdin);
    clear_if_neededC(str);


    printf ("DNI de usuario: ");
    fgets(str, MAX_LENGTH, stdin);
    clear_if_neededC(str);
    sscanf(str, "%s", frmt_str);

  //  nombre = (char *)malloc((strlen(frmt_str) + 1) * sizeof  (char));
    //strlen: longitud de la cadena de frmt_str sin /0, por ello, le metemos un +1.
    strcpy(DNI, frmt_str); //STRING COPY

    printf ("Contrasenya de trabajador: ");
    fgets(str, MAX_LENGTH, stdin);
    clear_if_neededC(str);
    sscanf(str, "%s", frmt_str);

    strcat(DNI,"#"); //STRING COPY
    strcat(DNI, frmt_str); //STRING COPY
    


    //LONGITUD DEL NOMBRE
    int longDNI = 0;
    longDNI = largo_cadena(DNI);

    int i = 0;
    FILE *fichero;
    char c;

    fichero = fopen("trabajador.txt", "r");
  
    int contar = 0;

    int result = 0;

    char read[100];
    char DNI2[100];

    while(fgets(read, 100, fichero)) {

        sscanf(read, "%s", DNI2);

       
        

        //strcmp ez zuen funtzionatzen beraz horrela egin dugu
        if(strcmp(DNI, DNI2)==0){

        menua(DNI);
        
        }
        
     }


//
int validacion()
{
	int opcion;
	int DNI;
	int existe; //Sera 0 en caso de que el trabajador no exista en fichero
	Trabajador u[50];

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
                        comprobarTrabajadorRegistrado(&u[total], total);
                            
                        
                    }

				/*printf("Introduzca el DNI sin letra:\n");
				scanf("%i", &DNI);
				existe = existeTrabajador(DNI);
				if(existe == 0)
				{
					printf("El DNI introducido no corresponde a ningun trabajador\n");
				}*/
				break;
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