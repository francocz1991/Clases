#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //char palabra [15]= "hola";//14+\0, solo en la declaracion de la variable
    //palabra = "hola"; no se puede
    char palabra1 [15];
    char palabra2[15];
    int i;
    int cant;
    char buffer[1024];
    int comp;

    printf("Ingrese una palabra: ");
    //scanf("%s",&palabra);con o sin & se puede pero toma hasta espacio en blanco
    fflush(stdin);
    gets(buffer);

    while(strlen(buffer)>14)//cantidad
    {
        printf("Reingrese una palabra: ");
        fflush(stdin);
        gets(buffer);
    }



    strcpy(palabra1, buffer);//(destino, origen)
    strcpy(palabra2, "gato");

    comp = strcmp(palabra1, palabra2);//compara contenido de las palabras, devuelve 1.0.-1 distinge mayusculas
    //comp = stricomp(palabra1, palabra2); igual que strcmp pero no distingue mayusculas
    strupr(palabra1);//convierte a mayuscula
    strlwr(palabra2);//convierte a minuscula
    strcat(buffer,palabra2);//concatena
    strcat(buffer,palabra1);
    cant= strlen(palabra1);

    printf("palabra1: %s-- palabra2: %s\n",palabra1,palabra2);
    printf("Cantidad: %d\n",cant);
    printf("Resultado de la comparacion: %d",comp);
    printf("buffer: %s",buffer);

    return 0;
}

/*tarea:
declarar 3 variables
char nombre[definir cantidad de caracteres];
char apellido[defi...];
char apellidoynombre[defin...];

usuario ingresa apellido, ingresa nombre y en la variable apellidoynombre deberia quedar "Franco, Cortez"
la variable apellido y la variable nombre no se tocan*/
