
#include <stdio.h>
#include <stdlib.h>

int i, edad[5];
main()
{
    for (i = 0; i <= 4; i++)
    {
        printf("Inserta el valor:");
            scanf("%d", &edad[i]);
    }
    for (i = 0; i <= 4; i++)
    {
        printf("El valor de la posicion %d es %d\n", i + 1, edad[i]);
    }
    printf("Promedio de edades %d\n ") ;
    return 0;
}
