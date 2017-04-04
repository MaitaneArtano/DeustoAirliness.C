#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "estructuras.h"


int EscribirEnFicheroVuelo (Vuelo *v1, int total, char *nombre);
void clear_if_needed(char *str);
void liberarMemoriaContacto(Vuelo *v, int NUM_VUELOS);


int IntroducirVuelo(Vuelo *v1, int NUM_VUELOS)
{
    char *str;

    printf("\nIntroduzca el codigo del vuelo:\n");
    fgets(str, 20, stdin);
    clear_if_needed(str);
    sscanf(str, "%d", &v1->cod_vuelo);

    printf("El codigo de vuelo es: %d \n", v1[0].cod_vuelo);
}




int EscribirEnFicheroVuelo (Vuelo *v1, int total, char *nombre)
{

}



void clear_if_needed(char *str)
{

    if (str[strlen(str) - 1] != '\n'){
        int c;
        while ((c = getchar()) != EOF && c != '\n');
    }
}

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
        
}
