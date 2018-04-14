#include <stdio.h>
#include <stdlib.h>

int contarPares(int[], int);
/** \brief determima si un caracter esta o no esta dentro del array
 *
 * \param char[] coleccion de caracteres
 * \param int tamaño de la coleccion
 * \param char caracter a buscar
 * \return int -1 si no lo encuentra o el indice del vector si lo encuentra
 *
 */
int buscarInt(char array[], int cantidad, char caracter);

int main()
{
    int vector[5]={5,2,9,6,5};
    char letras[5] = {'f','g','i','m','q'};
    int cantidad;
    int indexLetra;

    cantidad = contarPares(vector,5);
    printf("Cantidad de pares: %d\n", cantidad);

    indexLetra = buscarInt(letras,5,'f');
    if(indexLetra==-1)
    {
        printf("No se encuentra el caracter");
    }
    else
    {
        printf("El caracter se encuentra en el array");
    }




    return 0;
}

int contarPares(int array[], int cantidad)
{
    int contadorPares = 0;
    int i;
    for(i=0; i<cantidad; i++)
    {
        if(array[i]%2==0)
        {
            contadorPares++;
        }
    }

    return contadorPares;
}

int buscarInt(char array[], int cantidad, char caracter)
{
    int index = -1;
    int i;

    for(i=0; i<cantidad; i++)
    {
        if(array[i]==caracter)
        {
            index = i;
            break;
        }
    }

    return index;
}
