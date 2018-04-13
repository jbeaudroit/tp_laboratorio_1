#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
/** \brief resultado de la función suma
 *
 * \param primer numero a sumar
 * \param segundo numero a sumar
 * \return resultado de la suma
 *
 */

float sumar(float numero1, float numero2)
{

    float retornoSuma;

    retornoSuma = numero1 + numero2;

    return retornoSuma;
}


/** \brief resultado de la funcion resta
 *
 * \param primer numero a restar
 * \param segundo numero a restar
 * \return resultado de la resta
 *
 */
float restar(float numeroA, float numeroB)
{
    float retornoResta;

    retornoResta = numeroA - numeroB;

    return retornoResta;
}

/** \brief resultado de la funcion dividir
 *
 * \param el numero a dividir
 * \param el numero por el que se divide
 * \return resultado de la division
 */

float dividir (float numero1, float numero2)

{

    float retornoDividir;

    retornoDividir = numero1 / numero2;

    return retornoDividir;
}

/** \brief resultado de la funcion multiplicar
 *
 * \param numero a multiplicar
 * \param numero por el que se multiplica
 * \return resultado de la multiplicacion
 */

float multiplicar (float numero1, float numero2)
{

    float retornoMultiplicar;

    retornoMultiplicar = numero1 * numero2;

    return retornoMultiplicar;
}

/** \brief resultado de la funcion factorial
 *
 * \param numero del que se obtiene el factorial
 */

 long long factorial (float numero1)
{
    long long retornoFactorial=1;
     float i;

     for (i=numero1;i>=1;i--)
     {
         retornoFactorial=retornoFactorial*i;
     }

     return retornoFactorial;
}
