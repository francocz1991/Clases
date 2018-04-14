#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int a = 9;
    int b = 5;
    int c;

    //swap
    c = a;
    a = b;
    b = c;

    printf("A= %d, B= %d, C= %d",a,b,c);*/

    //int vector [5] ={5,2,8,6,5};
    char letras [5] = {'f','g','i','m','q'};
    int i;
    int j;
    int auxiliar;

    /*for(i=0; i<4;i++)
    {
        for(j=i+1; j<5; j++)
        {
            if(vector[i]>vector[j])
            {
                auxiliar = vector[i];
                vector[i] = vector[j];
                vector[j] = auxiliar;
            }
        }
    }*/

    for(i=0; i<4;i++)
    {
        for(j=i+1; j<5; j++)
        {
            if(letras[i]>letras[j])
            {
                auxiliar = letras[i];
                letras[i] = letras[j];
                letras[j] = auxiliar;
            }
        }
    }

    /*for(i=0; i<5; i++)
    {
        printf("%d", vector[i]);
    }*/

    for(i=0; i<5; i++)
    {
        printf("%c", letras[i]);
    }
    return 0;
}
