#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include "funciones.h"


int main()
{
system("color 03");


    double valorA;
    double valorB;
    int opcion;
    int confirm = 0;
    int confirmDos = 0;
    int confirmTres= 0;
    double suma;
    double resta;
    double multi;
    double divi;
    double facA;
    double facB;




    do
    {
        system("cls");
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("~~~~~~~~~~~~~~~~~         CALCULADORA 0.0.1                    ~~~~~~~~~~~~~~~\n");
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("~~~~~~~~~~~~~~~~~      Opciones:                               ~~~~~~~~~~~~~~~\n");
        printf("~~~~~~~~~~~~~~~~~      1- Ingresar valor de A (A= %0.2f)        ~~~~~~~~~~~~~~~\n",valorA);
        printf("~~~~~~~~~~~~~~~~~      2- Ingresar valor de B (B= %0.2f)        ~~~~~~~~~~~~~~~\n",valorB);
        printf("~~~~~~~~~~~~~~~~~      3- Calcular todas las operaciones       ~~~~~~~~~~~~~~~\n");
        printf("~~~~~~~~~~~~~~~~~      4- Mostrar resultados                   ~~~~~~~~~~~~~~~\n");
        printf("~~~~~~~~~~~~~~~~~      5- Salir                                ~~~~~~~~~~~~~~~\n");
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

        opcion =tomarOpcion();

        switch(opcion)
        {
        case 1:

            valorA = pedirValor();
            confirm = 1;
            break;

        case 2:
            valorB = pedirValor();
            confirmDos = 1;

            break;
        case 3:

            if(confirm==1 && confirmDos ==1)
            {



                suma = sumaa(valorA,valorB);
                resta = restaa(valorA,valorB);
                divi= divicion(valorA,valorB);
                multi = multiplicacion(valorA,valorB);
                facA= factorialA(valorA);
                facB= factorialB(valorB);
                printf("calculos realizados correctamente \n");
                system("pause");
                confirmTres =1;





            }
            else
            {
                printf("falta cargar valores \n");
                system("pause");
            }
            break ;
        case 4:
            if(confirmTres==1)
            {



                printf("la suma  %.02lf+%.02lf es:%.02lf \n",valorA,valorB, suma);
                printf("la resta  %.02lf-%.02lf es:%.02lf \n",valorA,valorB,resta);
                printf("la multiplicacion  %.02lfx%.02lf es:%.02lf \n",valorA,valorB,multi);
                printf("la divicion %.02lf/%.02lf es:%.02lf \n",valorA,valorB,divi);
                printf("el factorial de %.02lf es:%.02lf \n",valorA,facA);
                printf("el factorial de %.02f es:%.02lf \n",valorB,facB);
                system("pause");
            }
            else
            {
                printf("falta calcular valores\n");
                system("pause");
            }
            break;
        case 5:
            printf("hasta la proxima");
            break;

        default:
            printf("opcion incorrecta intende de nuevo\n");
            system("pause");
            tomarOpcion();


        }
    }
    while(opcion !=5 );




}
