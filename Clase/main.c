#include <stdio.h>
#include <stdlib.h>

int getEntero (char* mensaje, char* mensajeError, int maximo, int minimo);


int main()
{
    int entero;
    entero = getEntero("Ingrese edad","Error",100,1);
}

int getEntero (char* mensaje, char* mensajeError, int maximo, int minimo)
{
    int retorno = -1;
    do
    {
        printf("%s: ",mensaje);
        scanf("%d",&retorno);
        if(retorno>minimo && retorno<maximo)
        {
            printf("Edad ingresada: %d", retorno);
            break;
        }
        printf("%s \n",mensajeError);
    }while(retorno>maximo || retorno<minimo);

    return retorno;
}
