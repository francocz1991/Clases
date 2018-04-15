#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "funciones.h"

#define CANTIDAD 100

void primerCaracterEnMatuscula(char array[]);

int main()
{
    char nombre[CANTIDAD];
    char apellido[CANTIDAD];
    char apellidoNombre[CANTIDAD];

    int j;


    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(nombre);
    printf("\nIngrese apellido: ");
    fflush(stdin);
    gets(apellido);

    primerCaracterEnMatuscula(nombre);
    primerCaracterEnMatuscula(apellido);

    strcat(nombre,", ");
    strcat(nombre,apellido);
    strcpy(apellidoNombre,nombre);
    printf("%s",apellidoNombre);

    return 0;
}
