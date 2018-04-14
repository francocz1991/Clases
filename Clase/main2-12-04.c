#include <stdio.h>
#include <stdlib.h>
#define CANTIDAD 5
void cambiarEntero(int numero);
void cambiarVector(int listadoDeNumeros[]);
void cambiarVectorConMenosUno(int listado[]);

int main()
{
    /*int edad = 22;
    cambiarEntero(edad);

    printf("%d", edad);*/

    int edades[CANTIDAD];
    cambiarVector(edades);

    printf("%d \n",edades[0]);

    cambiarVectorConMenosUno(edades);



    return 0;
}

void cambiarEntero(int numero)
{
    numero = 666;
}

void cambiarVector(int listadoDeNumeros[])
{
    listadoDeNumeros[0] = 666;

}

void cambiarVectorConMenosUno(int listado[])
{
    int i;
    int tamanio = sizeof(listado);

    printf("%d \n", tamanio);

    for(i=0;i<tamanio;i++)
    {
        listado[i] = -1;
        printf("%d \n", listado[i]);
    }
}
