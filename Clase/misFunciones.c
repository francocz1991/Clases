/** \brief
 *
 * \param void
 * \return void
 *
 */
void saludar(void)
{
    printf("Hola mundo!\n");
}

/** \brief
 *
 * \param numeroUno int
 * \param numeroDos int
 * \return int
 *
 */
int sumar(int numeroUno, int numeroDos)
{
    int resultado = 0;
    resultado = numeroUno+numeroDos;
    return resultado;
}

/** \brief
 *
 * \param dividendo int
 * \param divisor int
 * \return float
 *
 */
float dividirEnteros(int dividendo, int divisor)
{
    float resultado = 0;
    resultado = (float)dividendo/divisor;
    return resultado;
}

int pedirNumeroPar()
{
    int retorno = -1;
    int numero;
    printf("Ingrese numero par: ");
    scanf("%d", &numero);

    if(numero%2==0 && numero!=0)
        {
            retorno=0;
        }

    return retorno;
}


