#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "estructuras.h"

#define MAX_LENGTH_DNI 10
#define MAX_LENGTH_NOM 50
#define MAX_LENGTH_AP 50
#define MAX_LENGTH_PUESTO 50
void clear_if_neededT (char *str)
{

    if (str[strlen(str) - 1] != '\n'){
        int c;
        while ((c = getchar()) != EOF && c != '\n');
    }



int IntroducirVuelo(Trabajador *Trabajador, int total)
{
	char str[MAX_LENGTH];


    //Si no hacemos esto, hace \n y salta a la siguiente, sin poder escribir nada
    printf("");
    fgets(str, MAX_LENGTH, stdin);
    clear_if_neededT(str);

	char str_dni[MAX_LENGTH_DNI];
    char frmt_str_dni[MAX_LENGTH_DNI];

    printf("Escriba el DNI del TRABAJADOR \n");
    fgets(str_dni, MAX_LENGTH_DNI, stdin);
    clear_if_neededT(str_dni);
    sscanf(str_dni, "%[^\n]s", frmt_str_dni); //%%[^\n]s -> para que deje escribir espacios

    //RESERVAR LA MEMORIA JUSTA PARA LA CADENA ALMACENADA
    Trabajador->DNI = (char *)malloc((strlen(frmt_str_dni) + 1) * sizeof  (char));
    //strlen: longitud de la cadena de frmt_str sin /0, por ello, le metemos un +1.
    strcpy(Trabajador->DNI, frmt_str_dni); //STRING COPY

    char str_nom[MAX_LENGTH_NOM];
    char frmt_str_nom[MAX_LENGTH_NOM];


     printf("Escriba el NOMBRE del TRABAJADOR \n");
    fgets(str_nom, MAX_LENGTH_NOM, stdin);
    clear_if_neededT(str_nom);
    sscanf(str_nom, "%[^\n]s", frmt_str_nom); //%%[^\n]s -> para que deje escribir espacios

    //RESERVAR LA MEMORIA JUSTA PARA LA CADENA ALMACENADA
    Trabajador->nombre = (char *)malloc((strlen(frmt_str_nom) + 1) * sizeof  (char));
    //strlen: longitud de la cadena de frmt_str sin /0, por ello, le metemos un +1.
    strcpy(Trabajador->nombre, frmt_str_nom); //STRING COPY

    char str_ap[MAX_LENGTH_AP];
    char frmt_str_ap[MAX_LENGTH_AP];

    printf("Escriba el APELLIDO del TRABAJADOR \n");
    fgets(str_ap, MAX_LENGTH_AP, stdin);
    clear_if_neededT(str_ap);
    sscanf(str_ap, "%[^\n]s", frmt_str_ap); //%%[^\n]s -> para que deje escribir espacios

    //RESERVAR LA MEMORIA JUSTA PARA LA CADENA ALMACENADA
    Trabajador->apellido = (char *)malloc((strlen(frmt_str_ap) + 1) * sizeof  (char));
    //strlen: longitud de la cadena de frmt_str sin /0, por ello, le metemos un +1.
    strcpy(Trabajador->apellido, frmt_str_ap); //STRING COPY

    char str_puesto[MAX_LENGTH_PUESTO];
    char frmt_str_puesto[MAX_LENGTH_PUESTO];

     printf("Escriba el PUESTO QUE OCUPA del TRABAJADOR \n");
    fgets(str_puesto, MAX_LENGTH_AP, stdin);
    clear_if_neededT(str_puesto);
    sscanf(str_puesto, "%[^\n]s", frmt_str_puesto); //%%[^\n]s -> para que deje escribir espacios

    //RESERVAR LA MEMORIA JUSTA PARA LA CADENA ALMACENADA
    Trabajador->puesto = (char *)malloc((strlen(frmt_str_puesto) + 1) * sizeof  (char));
    //strlen: longitud de la cadena de frmt_str sin /0, por ello, le metemos un +1.
    strcpy(Trabajador->puesto, frmt_str_puesto); //STRING COPY


    FILE *fichero;
	fichero = fopen("Trabajador.txt", "wt");
	fwrite(Trabajador.DNI, total,fichero);
	fwrite(Trabajador.nombre, total,fichero);
	fwrite(Trabajador.apellido, total,fichero);
	fwrite(Trabajador.puesto, total,fichero);
	
	


	fclose(fichero);

	printf("¡VUELO GUARDADO!\n");
	printf("\n");
      return 0;

}

