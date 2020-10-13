
      ///////////////// 05. Series  //////////////////////     ////     ///  ///////////  ///////////
     //       Universidad Tecnologica de Tlaxcala      //        //     //        //          //
    //          Luis Fernando Lima Torres             //         //     //        //          //
   //                 4°C     MAAU                   //          //     //        //          //
  ////////////////////////////////////////////////////             /////          //          //

//////     serie de un numero n a 0 con el bucle while     //////

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador=0, n;

    printf("Escribe el valor de n: \a");
    scanf("%d",&n);

    while (contador<=n)
    {
       printf("%d",n);
    n=n-1;
    }
printf("\n\n--------------- Fin del ciclo ----------------\n\a");

    return 0;
}
