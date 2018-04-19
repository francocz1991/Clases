#include <stdio.h>
#include <stdlib.h>
#include "funcionesVP.h"

#define cantidad 3

int main()
{
    int legajo[cantidad];
    char nombre[cantidad][30];
    int nota1[cantidad];
    int nota2[cantidad];
    float promedio[cantidad];
    int i;
    int j;

    for(i=0;i<cantidad;i++)
    {
        printf("Inserte legajo: ");
        scanf("%d",&legajo[i]);

        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(nombre[i]);


        printf("Inserte nota1: ");
        scanf("%d",&nota1[i]);


        printf("Inserte nota2: ");
        scanf("%d",&nota2[i]);
        printf("\n");

        promedio[i]= calcularPromedio(nota1[i], nota2[i]);
    }





    for(i=0;i<cantidad;i++)
    {
        mostrar(legajo,nombre,nota1,nota2,promedio);
    }
    return 0;
}

float calcularPromedio(int a, int b)
{
    float promedio;
    promedio = (a+(float)b)/2;
    return promedio;
}

void mostrar(int a[],char b[][30],int c[],int d[],float e[])
{
    int i;
    for(i=0;i<cantidad;i++)
    {
        printf("Legajo: %d \n",a[i]);
        printf("Nombre: %s \n",b[i]);
        printf("Nota 1: %d \n",c[i]);
        printf("Nota 2: %d \n",d[i]);
        printf("Promedio: %f \n",e[i]);
    }

}

reciba lejo, tamaño,
devuelve indice del legajo si lo encuentra o -1
