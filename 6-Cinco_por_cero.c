#include<stdio.h>
#include<stdlib.h>
int numero[10];

main()
{
     printf("Entrada de datos\n\n");
    for (int i=0; i<=9; i++)
    {
        printf("ingresa un numero: ");
        scanf("%d",&numero[i]);
    }

    printf("valor modificado\n");
    for(int i=0; i<=9; i++)
    {
        if (numero[i]==5)
        {
            numero[i]=0;
        }
        printf("posicion %d el valor es %d\n",i+1,numero[i]);
    }
    return 0;
}
