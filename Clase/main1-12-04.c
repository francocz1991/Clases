#include <stdio.h>
#include <stdlib.h>
#include "FuncionesVectores.h"

int main()
{
    float listadoPrecio[5];
    int indice;
    int i;
    float precioAux;

    indice = dameUnEntero(0, 4);
    precioAux = dameUnFlotante(1, 1000);

    listadoPrecio[indice] = precioAux;

    for(i=0; i<5; i++)
    {
        printf("%f \n",listadoPrecio[i]);
    }

    return 0;
}

/*void ejemploCargaSecuencial(void)
{
    int edad;
    float precio;
    int listadoEdades[5] = {22,33,44,11,55};
    float listadoPrecios[5];
    int i;

    edad = 66;

    printf("%d \n",edad);
    printf("%d \n",&edad);

    printf("&listadoEdades: %d \n", &listadoEdades);
    printf("listadoEdades: %d \n", listadoEdades);
    printf("listadoEdades[0]: %d \n", listadoEdades[0]);
    printf("&listadoEdades[0]: %d \n", &listadoEdades[0]);
    printf("listadoEdades[4]: %d \n", listadoEdades[4]);
    printf("listadoEdades[5]: %d \n", listadoEdades[5]);

    for(i=0; i<5; i++)// pedir datos
    {
        printf("Ingrese el numero en la posicion %d: \n",i);
        scanf("%d",&listadoEdades[i]);
    }

    for(i=0; i<5; i++)// mostrar datos
    {
        printf("listadoEdades[%d]: %d \n",i,listadoEdades[i]);
    }

    for(i=0; i<5; i++)// pedir datos
    {
        printf("Ingrese el numero en la posicion %d: \n",i);
        scanf("%f",&listadoPrecios[i]);
    }

    for(i=0; i<5; i++)// mostrar datos
    {
        printf("listadoPrecios[%d]: %f \n",i,listadoPrecios[i]);

    }

}

int dameUnEntero(int maximo, int minimo)
{
    int i;
    printf("Ingrese un entero entre %d y %d ", minimo, maximo);
    scanf("%d", &i);
    return i;
}

float dameUnFlotante(int maximo, int minimo)
{
    float i;
    printf("Ingrese un valor entre %d y %d :",minimo,maximo);
    scanf("%f",&i);
    return i;
}
*/
