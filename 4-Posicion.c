#include<stdio.h>
#include<stdlib.h>
int numero[9];
int j,posicion,valor;
main()
{
    printf("Entrada de datos\n\n");
    for (int i=0; i<=9; i++)
    {
        printf("ingresa un numero: ");
        scanf("%d",&numero[i]);
    }
    printf("Muestra los valores modificados\n\n");
    for(int j=0; j<=9; j++)
    {
        if (numero[j]==8)
        {
            numero[j]=8;

        }
       printf("posicion %d el valor es %d\n",j+1,numero[j]);

    }
    return 0;
}
