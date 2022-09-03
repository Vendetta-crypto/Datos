#include <stdio.h>
#include <stdlib.h>
main()
{
    int m[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int menor, mayor = 0, i, posicion;
    for (i = 0; i < 10; i++)
    {
        if (mayor < m[i])
            mayor = m[i];
        posicion = i + 1;
    }
    printf("EL mayor es: %d y la posicion es: %d", mayor, posicion);

    return 0;
}
