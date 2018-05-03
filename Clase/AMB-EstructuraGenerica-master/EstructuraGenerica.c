#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "EstructuraGenerica.h"
#define TAMANIO 10
#define OCUPADO 0
#define LIBRE 1



int eUsuario_init( eUsuario listado[],int limite)
{
    int retorno = -1;
    int i;
    if(limite > 0 && listado != NULL)
    {
        retorno = 0;
        for(i=0; i<limite; i++)
        {
            listado[i].estado= LIBRE;
            listado[i].idUsuario= 0;
        }
    }
    return retorno;
}

int eUsuario_buscarLugarLibre(eUsuario listado[],int limite)
{
    int retorno = -1;
    int i;
    if(limite > 0 && listado != NULL)
    {
        retorno = -2;
        for(i=0;i<limite;i++)
        {
            if(listado[i].estado == LIBRE)
            {
                retorno = i;
                break;
            }
        }
    }
    return retorno;
}

int eUsuario_siguienteId(eUsuario listado[],int limite)
{
    int retorno = 0;
    int i;
    if(limite > 0 && listado != NULL)
    {
        for(i=0; i<limite; i++)
        {
            if(listado[i].estado == OCUPADO)
            {
                    if(listado[i].idUsuario>retorno)
                    {
                         retorno=listado[i].idUsuario;
                    }

            }
        }
    }

    return retorno+1;
}

int eUsuario_buscarPorId(eUsuario listado[] ,int limite, int id)
{
    int retorno = -1;
    int i;
    if(limite > 0 && listado != NULL)
    {
        retorno = -2;
        for(i=0;i<limite;i++)
        {
            if(listado[i].estado == OCUPADO && listado[i].idUsuario == id)
            {
                retorno = i;
                break;
            }
        }
    }
    return retorno;
}

int eUsuario_mostrarUno(eUsuario parametro)
{
     printf("\n %s - %d - %d",parametro.nombreDeUsuario,parametro.idUsuario,parametro.estado);

}

int eUsuario_mostrarListado(eUsuario listado[],int limite)
{
    int retorno = -1;
    int i;
    if(limite > 0 && listado != NULL)
    {
        retorno = 0;
        for(i=0; i<limite; i++)
        {
            if(listado[i].estado==OCUPADO)
            {

                eUsuario_mostrarUno(listado[i]);
            }
        }
    }
    return retorno;
}

int eUsuario_mostrarListadoConBorrados(eUsuario listado[],int limite)
{
    int retorno = -1;
    int i;
    if(limite > 0 && listado != NULL)
    {
        retorno = 0;
        for(i=0; i<limite; i++)
        {
            if(listado[i].estado==LIBRE)
            {
                printf("\n[LIBRE]");
            }
            eUsuario_mostrarUno(listado[i]);
        }
    }
    return retorno;
}

int eUsuario_alta(eUsuario  listado[],int limite)
{
    int retorno = -1;
    char nombreDeUsuario[50];
    char contrasenia[50];
    int id;
    int indice;

    if(limite > 0 && listado != NULL)
    {
        retorno = -2;
        indice = eUsuario_buscarLugarLibre(listado,limite);
        if(indice >= 0)
        {
            retorno = -3;
            id = eUsuario_siguienteId(listado,limite);

            //if(!getValidString("nombreDeUsuario?","Error","Overflow", nombreDeUsuario,50,2))
            //{
            if(id>0)
            {
                printf("\nIngrese nombre de usuario: ");
                fflush(stdin);
                gets(nombreDeUsuario);
                printf("\nIngrese contrasenia: ");
                fflush(stdin);
                gets(contrasenia);
                printf("\n");
                strcpy(listado[indice].contrasenia,contrasenia);
                listado[indice].idUsuario = id;
                listado[indice].estado = OCUPADO;
                retorno = 0;
            }

            //}
        }
    }
    return retorno;
}

int eProducto_buscarLugarLibre(eProducto listado[],int limite)
{
    int retorno = -1;
    int i;
    if(limite > 0 && listado != NULL)
    {
        retorno = -2;
        for(i=0;i<limite;i++)
        {
            if(listado[i].estado == LIBRE)
            {
                retorno = i;
                break;
            }
        }
    }
    return retorno;
}

int eProducto_siguienteId(eProducto listado[],int limite)
{
    int retorno = 0;
    int i;
    if(limite > 0 && listado != NULL)
    {
        for(i=0; i<limite; i++)
        {
            if(listado[i].estado == OCUPADO)
            {
                    if(listado[i].idProducto>retorno)
                    {
                         retorno=listado[i].idProducto;
                    }

            }
        }
    }

    return retorno+1;
}

int eProducto_init( eProducto listado[],int limite)
{
    int retorno = -1;
    int i;
    if(limite > 0 && listado != NULL)
    {
        retorno = 0;
        for(i=0; i<limite; i++)
        {
            listado[i].estado= LIBRE;
            listado[i].idProducto= 0;
        }
    }
    return retorno;
}

int eProducto_alta(eProducto  listado[],int limite)
{
    int retorno = -1;int eUsuario_alta(eUsuario  listado[],int limite)
{
    int retorno = -1;
    char nombreDeUsuario[50];
    char contrasenia[50];
    int id;
    int indice;

    if(limite > 0 && listado != NULL)
    {
        retorno = -2;
        indice = eUsuario_buscarLugarLibre(listado,limite);
        if(indice >= 0)
        {
            retorno = -3;
            id = eUsuario_siguienteId(listado,limite);

            //if(!getValidString("nombreDeUsuario?","Error","Overflow", nombreDeUsuario,50,2))
            //{
            if(id>0)
            {
                printf("\nIngrese nombre de usuario: ");
                fflush(stdin);
                gets(nombreDeUsuario);
                printf("\nIngrese contrasenia: ");
                fflush(stdin);
                gets(contrasenia);
                printf("\n");
                strcpy(listado[indice].contrasenia,contrasenia);
                listado[indice].idUsuario = id;
                listado[indice].estado = OCUPADO;
                retorno = 0;
            }

            //}
        }
    }
    return retorno;
}
    char nombreDeProducto[50];
    int id;
    int indice;

    if(limite > 0 && listado != NULL)
    {
        retorno = -2;
        indice = eProducto_buscarLugarLibre(listado,limite);
        if(indice >= 0)
        {
            retorno = -3;
            id = eProducto_siguienteId(listado,limite);

            //if(!getValidString("nombreDeUsuario?","Error","Overflow", nombreDeUsuario,50,2))
            //{
            if(id>0)
            {
                printf("\nIngrese nombre del producto: ");
                fflush(stdin);
                gets(nombreDeProducto);
                printf("\nIngrese Precio: ");
                scanf("%.2f",&listado[indice].precio);
                printf("\nIngrese stock: ");
                scanf("%d",&listado[indice].stock);
                listado[indice].idProducto = id;
                listado[indice].estado = OCUPADO;

                retorno = 0;
            }

            //}
        }
    }
    return retorno;
}
