#include <stdio.h>
#include <stdlib.h>

char producto[10][10] = {"Jabon", "Cereal", "Galletas", "Pasta", "Agua", "Azucar", "Aceite", "Sal", "Leche", "Mayonesa"};
int precio[10] = {25, 75, 30, 20, 15, 40, 17, 49, 90, 10}, i;

main()
{
    for (i = 0; i < 10; i++)
    {
        printf("nombre: %s precio: %d\n", producto[i], precio[i]);
    }
    return 0;
}