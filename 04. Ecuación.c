
      /////////////////04. Ecuacion //////////////////////     ////     ///  ///////////  ///////////
     //       Universidad Tecnologica de Tlaxcala      //        //     //        //          //
    //          Luis Fernando Lima Torres             //         //     //        //          //
   //                 4°C     MAAU                   //          //     //        //          //
  ////////////////////////////////////////////////////             /////          //          //

//     Solucion para ecuaciones de segundo grado

#include<math.h>
#include <stdio.h>



int main ()
{
    int a, b, c;
    float R, R2, M;

     printf("\aEscribe el valor de a: ");
     scanf("%d", &a);
     printf("\n\aEscribe el valor de b: ");
     scanf("%d", &b);
     printf("\n\aEscribe el valor de c: ");
     scanf("%d", &c);

     M=b*b-(4*a*c); ///////////////////// SOLUCION adentro de la raiz

   if (M>=0)
   {
       R= (-b+sqrt(M))/(2*a);
       R2= (-b-sqrt(M))/(2*a);

       printf("\n\nEl resultado de X1 es: %.2f \a\n", R);
       printf("\nEl resultado de X2 es: %.2f \a\n", R2);
   }
   else  ////-----------------coloco que al haber una raiz en negativo, esta marcara ERROR
   {
       printf( "\n\a---------La raiz es negativa por lo que es ERROR!---------\n");
   }
 return 0;
}
