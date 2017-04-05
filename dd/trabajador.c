#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "estructuras.h"

#define MAX_LEN 9


void LeerTrabajadores();
void clear_if_needed(char *str);
int AsignarAgenda();


void LeerTrabajadores()
{
    char *str;
    FILE *fic;
    fic = fopen("trabajador.txt", "r");
    char str2[500];
    int endfile=0;

    if(fic == NULL)
    {
        printf("No hay trabajadores registrados");
    }else
    {
            endfile = fscanf(fic, " %[^\n] ", &str2);
            while(endfile != EOF)
            {
                printf(" %s\n " , str2);
                endfile = fscanf(fic, " %[^\n] \n", &str2);
            }
          
        fclose(fic);
    }
}


int AsignarAgenda()
{
    int DNI; 
    char str[MAX_LEN];

   

    printf("Introduzca el DNI del trabajador al que quiere asignar la tarea: \n" );
    do
    {
   
        fgets(str, MAX_LEN, stdin);
        clear_if_needed(str);
        sscanf(str, "%d", &DNI);



    }
    while(DNI==0);



   



}









