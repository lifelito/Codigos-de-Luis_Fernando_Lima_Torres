// CALCULO DE RESISTENCIAS EN PARALELO 25/09/2020
///// Luis Fernando Lima Torres ///// 4�C //// MAAU////
#include<stdio.h>

int main()
{
    float Vs;
    float R1, R2, R3;
    float I, RT, R23;

    printf( "Escribe el valor de la fuente Vs: \a");
    scanf("%f",&Vs);

    printf(  "Escriba el valor para la R1: \a");
    scanf("%f",&R1);

    printf(  "Escriba el valor para la R2: \a");
    scanf("%f",&R2);

    printf(  "Escriba el valor para la R3: \a");
    scanf("%f",&R3);

    R23= (R2*R3)/(R2+R3); //////calcular la resistencias de R2 y R3

    RT= (R1*R23)/(R1+R23);  /////Calculo de la Resistencia Total

    I= Vs/RT; //////Calculo de la Corriente Total

    printf( " El resultado de la CORIENTE TOTAL es: %fA \a", I );

    /* El voltaje va hacer el mismo para todas las resistencias en paralelo

       ----- INFORMACION----
           Si dos o m�s componentes est�n conectados en paralelo, tienen
           la misma diferencia de potencial (voltaje) en sus extremos. */

      printf( "\nEl voltaje de las Resistencias R1, R2 y R3 es: %fVolts", Vs);

return 0;
}
