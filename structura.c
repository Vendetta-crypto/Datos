#include <stdio.h>
#include <stdlib.h>
// declaracion global
struct alumno
{
    char no[25];
    char ap[10];
    int edad;
    int anio;
    int nota[4];
    float prom;
};

main()
{
    int i, acum = 0;
    struct alumno R1;
    printf(" ingrese los datos \n ");
    printf("Nombre: ");
    scanf("%s", &R1.no);
    printf("Apellido:");
    scanf("%s", &R1.ap);
    printf("Edad: ");
    scanf("%d", &R1.edad);
    printf("Año: ");
    scanf("%d", &R1.anio);

    for (i = 0; i < 4; i++)
    {
        printf("Ingrese la nota %d: ", i + 1);
        scanf("%d", &R1.nota[i]);
        acum = acum + R1.nota[i];
    }
    R1.prom = (float)acum / 4;
    printf("El promedio del alumno %s, %s es %2.2f \n", R1.ap, R1.no, R1.prom);
    return 0;
}
