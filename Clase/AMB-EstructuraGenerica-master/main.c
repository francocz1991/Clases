#include <stdio.h>
#include <stdlib.h>
#include "EstructuraGenerica.h"
//#include "susFunciones.h"
#define CANTIDADUSUARIOS 100
#define CANTIDADPRODUCTOS 1000
int main()
{
    int opcion = -1;
    int altaUsuario;
    int altaProducto;
    int idBuscar;
    int idEncontrado;
    int auxIdProducto;
    int i;
    int j;
    char auxiliarNombre[50];
    char auxiliarContrasenia[50];
    eUsuario listadoGenerico[CANTIDADUSUARIOS];
    eUsuario_init(listadoGenerico,CANTIDADUSUARIOS);

    eProducto ListadoProductos[CANTIDADPRODUCTOS];
    eProducto_init(ListadoProductos,CANTIDADPRODUCTOS);
    do
    {
        printf("Ingrese opcion: \n1)Alta\n2)Modificar datos\n3)Baja\n4)Publicar Producto\n5)Modificar publicacion");
        printf("\n6)Cancelar publicacion\n7)Comprar producto\n8)Listar publicaciones de usuario\n9)Listar publicaciones\n10)Listar usuarios\n0)SALIR\n");
        scanf("%d",&opcion);
        switch(opcion)
        {
            case 1:
                altaUsuario = eUsuario_alta(listadoGenerico,CANTIDADUSUARIOS);
                if(altaUsuario==-2)
                {
                    printf("\nNO HAY LUGAR!");
                }

                break;

            case 2:
                printf("\nIngrese id del usuario: ");
                scanf("%d",&idBuscar);
                idEncontrado = eUsuario_buscarPorId(listadoGenerico,CANTIDADUSUARIOS,idBuscar);

                if(idEncontrado==-2)
                {
                    printf("\nId no encontrado!");
                }
                else
                {
                    printf("\nIngrese nuevo nombre de usuario: ");
                    fflush(stdin);
                    gets(auxiliarNombre);
                    strcpy(listadoGenerico[idEncontrado].nombreDeUsuario,auxiliarNombre);
                    printf("\nIngrese nueva contrasenia: ");
                    fflush(stdin);
                    gets(auxiliarContrasenia);
                    strcpy(listadoGenerico[idEncontrado].contrasenia,auxiliarContrasenia);
                    printf("\nDATOS MODIFICADOS!\n\n");
                    printf("%s",listadoGenerico[idEncontrado].nombreDeUsuario);
                    printf("%s",listadoGenerico[idEncontrado].contrasenia);
                }
                break;

            case 3:
                printf("\nIngrese id del usuario: ");
                scanf("%d",&idBuscar);
                idEncontrado = eUsuario_buscarPorId(listadoGenerico,CANTIDADUSUARIOS,idBuscar);
                if(idEncontrado==-2)
                {
                    printf("\nId no encontrado!");
                }
                else
                {
                    strcpy(listadoGenerico[idEncontrado].nombreDeUsuario,auxiliarNombre);
                    strcpy(listadoGenerico[idEncontrado].contrasenia,auxiliarContrasenia);
                    listadoGenerico[idEncontrado].idUsuario=0;
                    listadoGenerico[idEncontrado].estado=1;
                    printf("\nDATOS BORRADOS!\n\n");
                }
                break;

            case 4:
                printf("\nIngrese id del usuario: ");
                scanf("%d",&idBuscar);
                idEncontrado = eUsuario_buscarPorId(listadoGenerico,CANTIDADUSUARIOS,idBuscar);
                if(idEncontrado==-2)
                {
                    printf("\nId no encontrado!");
                }
                else
                {
                    altaProducto=eProducto_alta(ListadoProductos,CANTIDADPRODUCTOS);
                    if(altaProducto==-2)
                    {
                        printf("\nSin lugar!");
                    }
                    else
                    {
                        auxIdProducto = eProducto_asignarIdProducto(ListadoProductos,CANTIDADPRODUCTOS);
                        for(i=0;i<50;i++)
                        {
                            if(listadoGenerico[idEncontrado].idProducto[i]==0)
                            {
                                listadoGenerico[idEncontrado].idProducto[i]==ListadoProductos[auxIdProducto].idProducto;
                                break;
                            }
                        }
                        printf("\nProducto ingresado! \n");
                    }
                }
                break;

            case 5:
                break;

            case 6:
                break;

            case 7:
                break;

            case 8:
                printf("\nIngrese id del usuario: ");
                scanf("%d",&idBuscar);
                idEncontrado = eUsuario_buscarPorId(listadoGenerico,CANTIDADUSUARIOS,idBuscar);
                if(idEncontrado==-2)
                {
                    printf("\nId no encontrado!");
                }
                else
                {
                    printf("Usuario: %s",listadoGenerico[idEncontrado].nombreDeUsuario);
                    for(i=0;i<CANTIDADPRODUCTOS;i++)
                    {
                        for(j=0;j<CANTIDADPRODUCTOS;j++)
                        {
                            if(listadoGenerico[idEncontrado].idProducto[i]==0)
                                {
                                    break;
                                }
                            if(listadoGenerico[idEncontrado].idProducto[i]==ListadoProductos[j].idProducto)
                            {

                                printf("ID: %d\n",ListadoProductos[j].idProducto);
                                printf("Descripcion: %s\n",ListadoProductos[j].nombre);
                                printf("Precio: %f\n",ListadoProductos[j].precio);
                                printf("Stock: %d\n",ListadoProductos[j].stock);
                            }
                        }

                    }
                }
                break;

            case 9:
                break;

            case 10:
                break;

        }
    }
    while(opcion!=0);



    /*printf( "\n \t muestro el array... esta vacio");
    eGen_mostrarListado(listadoGenerico,CANTIDADUSUARIOS);
    getchar();

    printf( "\n \t muestro el array con los borrados y vacios");
    eGen_mostrarListadoConBorrados(listadoGenerico,CANTIDADUSUARIOS);
    getchar();

    eGen_alta(listadoGenerico,CANTIDADUSUARIOS);
    eGen_alta(listadoGenerico,CANTIDADUSUARIOS);
    printf( "\n \t cargo dos elementos y muestro el array");
    eGen_mostrarListado(listadoGenerico,CANTIDADUSUARIOS);
    getchar();

    printf( "\n \t muestro el array con los borrados y vacios");
    eGen_mostrarListadoConBorrados(listadoGenerico,CANTIDADUSUARIOS);
    getchar();*/


    return 0;
}

/*
para validar cualquier dato.
gets(auxString)
int isAlpha(char);letra o no
int isDigit(char);digito o no
int isSpace(char);espacio o no

x=validaStringEntero(auxString)
if(x==1)
{
edad = atoi(auxString);
}

else
{
...
}

crear validarflotante, validar...



*/
