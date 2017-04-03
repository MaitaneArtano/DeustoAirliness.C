#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "estructuras.h"

#define MAX_LENGTH_ORI 100
#define MAX_LENGTH 5
#define MAX_LENGTH_DES 100
#define MAX_LENGTH_FECHA 100


void clear_if_neededT (char *str){

    if (str[strlen(str) - 1] != '\n'){
        int c;
        while ((c = getchar()) != EOF && c != '\n');
    }
}

int IntroducirVuelo(Vuelo *vuelo, int total){

	char str[MAX_LENGTH];


    //Si no hacemos esto, hace \n y salta a la siguiente, sin poder escribir nada
    printf("");
    fgets(str, MAX_LENGTH, stdin);
    clear_if_neededT(str);

    //ORIGEN
    char str_ori[MAX_LENGTH_ORI];
    char frmt_str_ori[MAX_LENGTH_ORI];

    printf("Origen del vuelo: \n");
    fgets(str_ori, MAX_LENGTH_ORI, stdin);
    clear_if_neededT(str_ori);
    sscanf(str_ori, "%[^\n]s", frmt_str_ori); //%%[^\n]s -> para que deje escribir espacios

    //RESERVAR LA MEMORIA JUSTA PARA LA CADENA ALMACENADA
    vuelo->origen = (char *)malloc((strlen(frmt_str_ori) + 1) * sizeof  (char));
    //strlen: longitud de la cadena de frmt_str sin /0, por ello, le metemos un +1.
    strcpy(vuelo->origen, frmt_str_ori); //STRING COPY

    //DESTINO
   	 char str_des[MAX_LENGTH_DES];
    char frmt_str_des[MAX_LENGTH_DES];

    printf("Destino del vuelo: \n");
    fgets(str_des, MAX_LENGTH_DES, stdin);
    clear_if_neededT(str_des);
    sscanf(str_des, "%[^\n]s", frmt_str_des); //%%[^\n]s -> para que deje escribir espacios

    //RESERVAR LA MEMORIA JUSTA PARA LA CADENA ALMACENADA
    vuelo->destino = (char *)malloc((strlen(frmt_str_des) + 1) * sizeof  (char));
    //strlen: longitud de la cadena de frmt_str sin /0, por ello, le metemos un +1.
    strcpy(vuelo->destino, frmt_str_des); //STRING COPY

     //FECHA
    char str_fecha[MAX_LENGTH_FECHA];
    char frmt_str_fecha[MAX_LENGTH_FECHA];

    printf("Destino del vuelo: \n");
    fgets(str_fecha, MAX_LENGTH_FECHA, stdin);
    clear_if_neededT(str_fecha);
    sscanf(str_fecha, "%[^\n]s", frmt_str_fecha); //%%[^\n]s -> para que deje escribir espacios

    //RESERVAR LA MEMORIA JUSTA PARA LA CADENA ALMACENADA
    vuelo->fecha = (char *)malloc((strlen(frmt_str_fecha) + 1) * sizeof  (char));
    //strlen: longitud de la cadena de frmt_str sin /0, por ello, le metemos un +1.
    strcpy(vuelo->fecha, frmt_str_fecha); //STRING COPY


	//precio
	float a = 10;
	do{
	    printf("Precio: ");
	    fgets(str, MAX_LENGTH, stdin);
	    clear_if_neededT(str);

	    a = atoi (str); //PARA QUE NO SE PUEDA ESCRIBIR MENOS DE 16

    }while (a < 16);
    sscanf(str, "%f", &vuelo->precio);

    return 0;
}




int EscribirEnFicheroVuelo (Vuelo *v, int total, char *nombre){

	char *x;
    x = "Vuelo";

    char *p;
    p = ".txt";

    char nombreFichero[20];

    strcpy(nombreFichero, nombre);
   

    strcat(nombreFichero, x);
    strcat(nombreFichero, p);


    FILE *fichero;
	fichero = fopen(nombreFichero, "a");


		fprintf(fichero, "%s/", t[total].origen);
		fprintf(fichero, "%s/", t[total].destino);
		fprintf(fichero, "%s\n", t[total].fecha);
		fprintf(fichero, "%f\n", t[total].precio);



	fclose(fichero);

	printf("¡VUELO GUARDADO!\n");
	printf("\n");

    return 0;

}
