      /////////////////03. Calificaciones/////////////////     ////     ///  ///////////  ///////////
     //       Universidad Tecnologica de Tlaxcala      //        //     //        //          //
    //          Luis Fernando Lima Torres             //         //     //        //          //
   //                 4°C     MAAU                   //          //     //        //          //
  ////////////////////////////////////////////////////             /////          //          //

/* Este codigo fue realizado despues de la explicacion del profesor */

#include <stdio.h>

int main()
{
    char C1,C2,C3;
    float CT, CT1;
    int CC1,CC2,CC3;

    printf("Escribe la primera calificacion con letra: \n");
    scanf("%c", &C1);
    fflush (stdin);
    printf("Escribe la segunda calificacion con letra: \n");
    scanf("%c", &C2);
    fflush (stdin);
    printf("Escribe la tercera calificacion con letra: \n");
    scanf("%c", &C3);

    ///////////////////////////PRIMERA CALIFICACION/////////////////////////////////
    if (C1=='A'||C1=='a')
    {
        CC1=10;
    }
       else if (C1=='B'||C1=='b')
       {
           CC1=9;
       }
       else if (C1=='C'||C1=='c')
       {
           CC1=8;
       }
       else if (C1=='D'||C1=='d')
       {
           CC1=7;
       }
        else if (C1=='E'||C1=='e')
       {
           CC1=6;
       }
       else
       {
           CC1=5;
       }
//////////////////SEGUNDA CALIFICACION///////////////////////
       if (C2=='A'||C2=='a')
    {
        CC2=10;
    }
       else if (C2=='B'||C2=='b')
       {
           CC2=9;
       }
       else if (C2=='C'||C2=='c')
       {
           CC2=8;
       }
       else if (C2=='D'||C2=='d')
       {
           CC2=7;
       }
        else if (C2=='E'||C2=='e')
       {
           CC2=6;
       }
       else
       {
           CC2=5;
       }
/////////////////////TERCERA CALIFICACION///////////////////////
      if (C3=='A'||C3=='a')
    {
        CC3=10;
    }
       else if (C3=='B'||C3=='b')
       {
           CC3=9;
       }
       else if (C3=='C'||C3=='c')
       {
           CC3=8;
       }
       else if (C3=='D'||C3=='d')
       {
           CC3=7;
       }
        else if (C3=='E'||C3=='e')
       {
           CC3=6;
       }
       else
       {
           CC3=5;
       }
////////////////////////////////////
/////////////OPERACIONES PARA EL CALCULO DEL PROMEDIO FINAL///////////////////////////////
    CT= CC1+CC2+CC3;
    CT1= CT/3;
////////////////////////////////////////////////////////////////////////////
    if (CT1>=8)
    {
        printf("\a-----¡Aprovado!-----" );
    }
    else
    {
        printf("\a-----¡Reprovado!-----");
    }

    printf("\a\nLa calificacion es de: %f", CT1);

return 0;
}
