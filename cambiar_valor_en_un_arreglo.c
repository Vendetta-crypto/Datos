/*realizar un programa que dado un arreglo con 5 elementos si encuentra un 5 que lo cambie por un 10*/
#include <stdio.h>
#include <stdlib.h>
int numero[5] = {1, 2, 3, 4, 5};

main()
{
    for (int i = 0; i <= 4; i++)
    {
        printf("posicion %d el valor es %d\n", i + 1, numero[i]);
    }
    printf("valor modificado\n");
    for (int i = 0; i <= 4; i++)
    {
        if (numero[i] == 5)
        {
            numero[i] = 10;
        }
        printf("posicion %d el valor es %d\n", i + 1, numero[i]);
    }
    return 0;
}
