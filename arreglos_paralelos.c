// manejo de arreglos paralelos
#include <stdio.h>
#include <stdlib.h>

char nombre[5][10] = {"luis", "juan", "maria", "jessica", "gabriel"};
int calificacion[5] = {80, 90, 80, 75, 90}, i, suma = 0;

main()
{
    for (i = 0; i <= 4; i++)
    {
        printf("nombre: %s calificacion: %d\n", nombre[i], calificacion[i]);
        suma += calificacion[i];
        printf("promedio: %d ", suma / 5);
    }
    return 0;
}
