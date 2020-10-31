#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ops=1;
    char opc='s';

    while (ops!=3)
    {
/////////---------------------------------------////////////
    while (opc=='s'||opc=='S')
    {

    printf("\n\n     ****************************------ Los tres programas ------***********************\n\n");
    printf("            1. Las 4 figuras o triangulos\n            2. El resultado de pi\n            3. La Secuencia\n");
    printf("\n\a          Selecciona el numero del programa: ");
    scanf("%d",&ops);

//////////////------------- Programa de los 4 triangulos --------------///////////////////

    if (ops==1)
    {
    int lia=1;
     int ma=1;
printf("\n\n*_*_*_*_*_*_*_*_*_*- Programa 4.16 Las 4 figuras o triangulos -*_*_*_*_*_*_*_*_*_*\n\n\a");

//----------Figura A) trinagulo)------------
    printf("\n\n\a  A)\n");

    for(int re=1; re<=10 ; re++)
    {
    for(int fl=1; fl<=lia; fl++)
    {
    printf("*");
    }
    printf("\n");
    lia=lia+ma;
    }

//----------Figura B) trinagulo)------------
    printf("\n\n\a  B)\n");

    printf("\n");
    for(int re=0; re<=10; re++)
    {
    for(int fl=2; fl<=lia; fl++)
    {
    printf("*");
    }
    printf("\n");
    lia=lia-ma;
    }

//----------Figura C) trinagulo)------------
    printf("\n\n\a  C)\n");                // en este triangulo tiene un poco de proble ya que no se logra mostrar en la pantalla
    printf("\n");                          //
    int lia1=1;
    int lie=0;
    int MA=1;

    for(int RE=1;RE<=10;RE=RE+1)
    {

     for(int LL=1; LL<=lie; LL=LL+1)
     {
        printf(" ");
     }
     for(int FL=2; FL<=lia1; FL=FL+1)
     {
       printf("*");
     }
        lie=lie+MA;
        lia1=lia1-MA;
    }

//----------Figura D) trinagulo)------------
    printf("\n\n\a  D)\n");
    printf("\n");
    int lia2=1;
    int lie2=10-1;
    int MA2=1;

    for(int Re=1; Re<=10; Re++)
    {
    for(int Ll=1; Ll<=lie2; Ll++) //los espacios
    printf(" ");

    for(int Fl=1; Fl<=lia2; Fl++) //los *
    printf("*");
    printf("\n");
    lia2 = lia2+MA2;
    lie2= lie2-MA2;
    }

}

//////////////------------------- 2. El resultado de pi --------------------////////////////////

    else if (ops==2)
    {
        printf("\n\n*_*_*_*_*_*_*_*_*_*- Programa 4.26 El resultado de pi -*_*_*_*_*_*_*_*_*_*\n\n\a");
    int pi, av=3; n;

    do
    {

    }
    }

//////////////------------------- 3. Secuencia --------------------////////////////////

    else if (ops==3)
    {
        printf("\a\n\n*_*_*_*_*_*_*_*_*_*- Programa 4.7 Secuencias -*_*_*_*_*_*_*_*_*_*\n\n");

        int leA=1, leB=2, leC=30, leD=15;

        printf("\n-La secuencia de A) es:\n");

    while(leA<=13)  // es la secuencia de 1 al 13
    {
        printf("%d ",leA);
        leA=leA+2;
    }

        printf("\n-La secuencia de B) es:\n");

     while(leB<=17)   // es la secuencia de 1 al 17
    {
        printf("%d ",leB);
        leB=leB+3;
    }

        printf("\n-La secuencia de C) es:\n");

     while(leC>=-30)   // es la secuencia de 30 al -30
    {
        printf("%d ",leC);
        leC=leC-10;
    }

        printf("\n-La secuencia de D) es:\n");

     while(leD<=55)   // es la secuencia de 15 al 55
    {
        printf("%d ",leD);
        leD=leD+8;
    }

    printf("\n\n\a**********Fin de la secuencia***********");

    }

/////////////---------------------------------------------////////////////////////////////////
    else
    {
        printf("\n\n\a      ---------------Error ese numero no se encuentra en el menu!!------------\a");
    }
//////////////////////////////////////////////////////////////////////////////////////////
    printf("\n\n    Desea seleccionar otro programa s/n: \a");
    scanf("%s", &opc);
    printf("    Presione para continuar...\a");
    getch();
    system("cls");

    }
//////////-------------------------------------------------------------------------------//////////////
    printf("\n\n\a-XXXXXXXXXXXXXX--- Programa finalizado ---XXXXXXXXXXXXXXX-\a\n");
    return 0;
    }
    return 0;
}
