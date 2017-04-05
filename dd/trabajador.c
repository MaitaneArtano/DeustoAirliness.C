#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "estructuras.h"


void LeerTrabajadores();


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










