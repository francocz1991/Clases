#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 3

typedef struct
{
    int legajo;
    char nombre[50];
    float promedio;
    //char email[50];

}eAlumno;

void mostrarAlumno(eAlumno unAlumno);
int main()
{
    eAlumno clase[T];

    ingresarArrayAlumno(clase,T);
    mostrarArrayAlumno(clase,T);

    //printf("%d",sizeof(eAlumno));

    /*eAlumno miAlumno;
    eAlumno otroAlumno;
    strcpy(otroAlumno.nombre,"Maria");
    otroAlumno.promedio = 6;
    otroAlumno.legajo = 3;
    strcpy(otroAlumno.email,"asdasdsa");

    printf("Ingrese legajo: ");
    scanf("%d",&miAlumno.legajo);

    printf("\nIngrese nombre: ");
    fflush(stdin);
    gets(miAlumno.nombre);

    printf("\nIngrese promedio: ");
    scanf("%f",&miAlumno.promedio);

    mostrarAlumno(otroAlumno);
    mostrarAlumno(miAlumno);*/




    return 0;
}

void mostrarAlumno(eAlumno unAlumno)
{
    printf("Legajo: %d -- Nombre: %s -- Promedio: %f\n",unAlumno.legajo,unAlumno.nombre,unAlumno.promedio);
}

void mostrarArrayAlumno(eAlumno unAlumno[], int cantidad)
{
    int i;
    for(i = 0;i<cantidad; i++)
    {
        mostrarAlumno(unAlumno[i]);
    }
}

void ingresarArrayAlumno(eAlumno unAlumno[], int cantidad)
{
    int i;
    for(i=0;i<cantidad;i++)
    {
        printf("Ingrese legajo: ");
        scanf("%d",&unAlumno[i].legajo);

        printf("\nIngrese nombre: ");
        fflush(stdin);
        gets(unAlumno[i].nombre);

        printf("\nIngrese promedio: ");
        scanf("%f",&unAlumno[i].promedio);
        printf("\n");
    }
}
