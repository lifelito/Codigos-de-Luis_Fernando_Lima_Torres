
      ///////////////// 05. Tabla 1 //////////////////////     ////     ///  ///////////  ///////////
     //       Universidad Tecnologica de Tlaxcala      //        //     //        //          //
    //          Luis Fernando Lima Torres             //         //     //        //          //
   //                 4°C     MAAU                   //          //     //        //          //
  ////////////////////////////////////////////////////             /////          //          //

//////     Primera tabla con buncle while     //////

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int N,i;

    printf("Escribe el valor de N: \n");
    scanf("%d",&N);

    while(i<=N)
    {
        printf("%d ",N*N-2*i);
        i=i+1;
    }

    printf("\n\n-------------Programa finalizado----------------\n\n");

    return 0;
}
