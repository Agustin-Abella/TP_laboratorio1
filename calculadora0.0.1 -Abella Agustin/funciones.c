#include <stdio.h>
#include "funciones.h"
#include <stdlib.h>

int tomarOpcion(void)
{
    int opcion;
    printf( " Introduzca opcion (1-5): ");
    scanf( "%d", &opcion );
    fflush(stdin);
    return opcion;

}
double pedirValor(void)
{
    double numero;
    printf( "Ingresar un valor:");
    fflush(stdin);
    scanf( "%lf",&numero);



    return numero;
}

double sumaa(double numeroUno, double numeroDos)
{
    double resultado;
    resultado = numeroUno + numeroDos;
    return resultado;
}
double restaa(double numeroUno, double numeroDos)
{
    double resultadoR;
    resultadoR = numeroUno - numeroDos;
    return resultadoR;
}
double divicion(double numeroUno,double numeroDos)
{
    double resultadoD;
    resultadoD = numeroUno / numeroDos;
    return resultadoD;
}
double multiplicacion(double numeroUno,double numeroDos)
{


    double resultadoM;
    resultadoM = numeroUno * numeroDos;
    return resultadoM;
}

double factorialA(double numeroUno)
{
    double factA;
    factA = 1;
    double factorialUno;
    if (numeroUno>=0)
    {
        for (factorialUno=numeroUno; factorialUno>1; factorialUno--)
        {
            factA =factA*factorialUno;
        }
    }
    return factA;
}

double factorialB(double numeroDos)
{
    double factB;
    factB = 1;
    double factorialDos;
    if (numeroDos>=0)
    {
        for (factorialDos=numeroDos; factorialDos>1; factorialDos--)
        {
            factB =factB*factorialDos;
        }
    }
    return factB;
}
