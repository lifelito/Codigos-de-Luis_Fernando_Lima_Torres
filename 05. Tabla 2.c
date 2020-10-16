
      ///////////////// 05. Tabla 2 //////////////////////     ////     ///  ///////////  ///////////
     //       Universidad Tecnologica de Tlaxcala      //        //     //        //          //
    //          Luis Fernando Lima Torres             //         //     //        //          //
   //                 4°C     MAAU                   //          //     //        //          //
  ////////////////////////////////////////////////////             /////          //          //

//////     Segunda tabla con buncle while     //////

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;

    printf("Escribir el valor de N: ");
    scanf("%d",&n);

    while(i<=n)
    {
        printf("%d %d \a" ,3*n+2*i+2*i, 3*n+2*i+2*i+2); //-- repite dos veces la formula o ecuacion pero en una le suma 2,
        i=i+1;                                          //-- esto para obtener dos valores seguidos.
    }

    printf("\n\n-------------Final de la secuencia----------------\n\n");

return 0;
}
