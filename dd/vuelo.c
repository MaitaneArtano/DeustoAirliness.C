#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "estructuras.h"

#define NUMVUELOS 20
#define MAX_LENGTH 20

//int EscribirEnFicheroVuelo (Vuelo *v1, int total, char *nombre);
int IntroducirVuelo(Vuelo *v1, int NUM_VUELOS);
void clear_if_needed(char *str);
//void liberarMemoriaContacto(Vuelo *v, int NUM_VUELOS);


int IntroducirVuelo(Vuelo *v1, int NUM_VUELOS)
{
    char str1[MAX_LENGTH];

    printf("\nIntroduzca el codigo del vuelo:\n");
    do
    {
        v1->cod_vuelo=0;
        fgets(str1, 10, stdin);
        clear_if_needed(str1);
        sscanf(str1, "%d", &v1->cod_vuelo);
    }while(&v1[NUM_VUELOS].cod_vuelo == 0);

    printf("El codigo de vuelo es: %s \n",str1);  
}




/*int EscribirEnFicheroVuelo (Vuelo *v1, int total, char *nombre)
{

}*/



void clear_if_needed(char *str)
{

    if (str[strlen(str) - 1] != '\n'){
        int c;
        while ((c = getchar()) != EOF && c != '\n');
    }
}


/*
void liberarMemoriaContacto(Vuelo *v, int NUM_VUELOS)
{
    for (int i = 0; i <NUM_VUELOS; i++)
    {
        free(v[i].cod_vuelo);
        free(v[i].origen);
        free(v[i].destino);
        free(v[i].fecha);
        free(v[i].precio);
    }     
        
} */
