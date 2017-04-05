#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "estructuras.h"

#define MAX_LENGTH 20

//int EscribirEnFicheroVuelo (Vuelo *v1, int total, char *nombre);
int IntroducirVuelo();
void clear_if_needed(char *str);
//void liberarMemoriaContacto(Vuelo *v, int NUM_VUELOS);


int IntroducirVuelo()
{
    int codigo=0;
    char str1[MAX_LENGTH];


    printf("\nIntroduzca el codigo del vuelo:\n");
    do
    {
        
        fgets(str1, 10, stdin);
        clear_if_needed(str1);
        sscanf(str1, "%d", &codigo);
    }while(codigo==0);



    printf("El codigo de vuelo es: %i \n", codigo);  
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
