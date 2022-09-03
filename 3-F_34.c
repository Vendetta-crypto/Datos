#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    int C[10], pro, acumulador = 0;
    for (i = 0; i < 10; i++)
    {
        printf("Ingresa las calificaciones: ");
        scanf("%d", &C[i]);
        acumulador += C[i];
        pro = acumulador / 10;
    }
    printf("El promedio del grupo F-34 es: %d", pro);
    return 0;
}
