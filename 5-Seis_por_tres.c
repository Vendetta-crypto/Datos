#include <stdio.h>
#include <stdlib.h>
int numero[9];

main()
{
    printf("Entrada de datos\n\n");
    for (int i = 0; i <= 9; i++)
    {
        printf("ingresa un numero: ");
        scanf("%d", &numero[i]);
    }
    printf("valor modificado\n\n");
    for (int i = 0; i <= 9; i++)
    {
        if (numero[i] == 6)
        {
            numero[i] = 3;
        }
        printf("El valor es %d\n", numero[i]);
    }
    return 0;
}
