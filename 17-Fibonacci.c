#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
int main()
{

    int i, n;
    int t1 = 0, t2 = 1;
    int siguiente_termino = t1 + t2;
    printf("Ingresa el numero de terminos para imprimir: ");
    scanf("%d", &n);
    printf("Fibonacci: %d, %d, ", t1, t2);
    for (i = 3; i <= n; ++i)
    {
        printf("%d, ", siguiente_termino);
        t1 = t2;
        t2 = siguiente_termino;
        siguiente_termino = t1 + t2;
    }
    return 0;
}