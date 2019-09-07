#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

/** \brief toma la opcion ingresada por el usuario del 1 al 5
 *
 * \param void  no recibe ningun parametro
 * \return int devuelve un
 *
 */
int tomarOpcion(void);
/** \brief  toma el valor A ingresado por el usuario
 *
 * \param void  no recibe parametros
 * \return double devuelve valor ingresado por el usuario
 *
 */
double pedirValor(void);
/** \brief toma el valor A y B ingresado por el usuario
 *
 * \param void no recibe parametros
 * \return double devuelve el valor ingresado por el usuario
 *
 */

double sumaa(double numeroUno, double numeroDos);
/** \brief resta el valor de A y B
 *
 * \param numeroUno double recibe el Balor A
 * \param numeroDos double recibe el balor B
 * \return double retorna el resultado de la resta
 *
 */
double restaa(double numeroUno,double numeroDos);
/** \brief multiplica el valor de A y B
 *
 * \param numeroUno double recibe el Balor A
 * \param numeroDos double recibe el balor B
 * \return double retorna el resultado de la multiplicacion
 *
 */
double multiplicacion(double numeroUno ,double numeroDos );
/** \brief multiplica el valor de A y B
 *
 * \param numeroUno double recibe el Balor A
 * \param numeroDos double recibe el balor B
 * \return double retorna la divicion
 *
 */
double divicion(double numeroUno,double numeroDos );
/** \brief factoriza el valor de A
 *
 * \param numeroUno double recibe el valor A ingresado por el usuario
 * \return double retorna el resultado del factorial de A
 *
 */
double factorialA(double numeroUno);
/** \brief factoriza el valor de B
 *
 * \param numeroDos double recibe el valor A ingresado por el usuario
 * \return double retorna el resultado del factorial de B
 *
 */
double factorialB(double numeroDos);

#endif // FUNCIONES_H_INCLUDED

