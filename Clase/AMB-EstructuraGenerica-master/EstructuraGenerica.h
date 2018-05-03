#ifndef ESTRUCTURAGENERICA_H_INCLUDED
#define ESTRUCTURAGENERICA_H_INCLUDED
typedef struct
{
    char nombreDeUsuario[50];
    char contrasenia[50];
    int idUsuario;
    int estado;
    int idProducto[1000];

}eUsuario;

typedef struct
{
    char nombre[50];
    int idProducto;
    float precio;
    int stock;
    int cantidadVendida;
    int estado;
}eProducto;
#endif // ESTRUCTURAGENERICA_H_INCLUDED

int eUsuario_init(eUsuario[],int limite);
int eUsuario_buscarPorId(eUsuario[] ,int limite, int id);
int eUsuario_siguienteId(eUsuario[] ,int limite);
int eUsuario_buscarLugarLibre(eUsuario listado[],int limite);

int eUsuario_mostrarUno(eUsuario parametro);
int eUsuario_mostrarListado(eUsuario[] ,int limite);
int eUsuario_mostrarListadoConBorrados(eUsuario[] ,int limite);

int eUsuario_alta(eUsuario[] ,int limite);
int eUsuario_baja(eUsuario[] ,int limite, int id);
int eUsuario_modificacion(eUsuario[] ,int limite, int id);

int eUsuario_ordenar(eUsuario[] ,int limite, int orden);
