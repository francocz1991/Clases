#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void primerCaracterEnMatuscula(char array[])
{
    char letra;
    int i;
    for(i=0; i<100; i++)
    {
        letra = array[0];
        letra = toupper(letra);
        array[0] = letra;

        if(array[i]==' ' )
        {
            letra = array[i+1];
            letra = toupper(letra);
            array[i+1] = letra;
        }
    }
}
