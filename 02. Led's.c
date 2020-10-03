    //\\// CALCULO DE RESISTENCIAS PARA LOS LED'S 26/09/2020 \\//\\
          /*Universidad  Tecnológica de Tlaxcala*/

    ///// Luis Fernando Lima Torres ///// 4°C //// MAAU ////

#include<stdio.h>

int main()
{
    float Vs, R1, R2, R3;

       /*Led Rojo std*/
    const float rojstd= 1.5; //------------------- Voltaje de trabajo
    const float intesidadrojo= 0.015; //-----------Intensidad de trabajo

       /*Led Blanco */
    const float blanco= 2.8; //---------------Voltaje de trabajo
    const float intesidadblanco= 0.02; //-----------Intensidad de trabajo

        /*Led Brillante Azul*/
    const float brillazul= 3; //---------------Voltaje de trabajo
    const float intesidadbrillazul= 0.02; //-----------Intensidad de trabajo

    printf( "Escribe el valor de la fuente VS: \a \n ");
    scanf("%f",&Vs);



    R1= (Vs-rojstd)/(intesidadrojo);
    R2= (Vs-blanco)/(intesidadblanco);
    R3= (Vs-brillazul)/(intesidadrojo);


    ///////////////////////Resistencia NECESARIA para el Led Rojo std/////////////////
    printf( "El valor la resistencia para el led rojo std: %.2f ohms\a \n", R1);

    ///////////////////////Resistencia NECESARIA para el Led Blanco//////////////////////////
    printf( "El valor la resistencia para el led blanco: %.2f ohms\a \n", R2);

    ///////////////////////Resistencia NECESARIA para el Led Brillante Azul/////////////
    printf( "El valor la resistencia para el led brillante azul: %.2f ohms\a \n", R3);

}
