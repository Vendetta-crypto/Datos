#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int bisiesto(int a)
{
    return ((a % 4 == 0 && a % 100 != 0 || a % 400 == 0));
}
int mesMax(int m, int a)
{
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
        return 31;
    if (m == 4 || m == 6 || m == 9 || m == 11)
        return 30;
    if (m == 2)
    {
        if (bisiesto(a))
            return 29;
        else
            return 28;
    }
}

int main()
{
    FILE *fichero;
    if ((fichero = fopen("Fechas.dat", "wb")) == NULL)
    {
        printf("No se puede abrir el fichero.\n");
        exit(1);
    }
    int d, m, a;
    printf("Ingresa el dia: ");
    scanf("%d", &d);
    fwrite(&d, sizeof(int), 1, fichero);
    printf("ingresa el mes:");
    scanf("%d", &m);
    fwrite(&m, sizeof(int), 1, fichero);
    printf("Ingresa el anio: ");
    scanf("%d", &a);
    fwrite(&a, sizeof(int), 1, fichero);

    if (a < 0 || m < 1 || m > 12 || mesMax(m, a) < d || d <= 0)
    {
        printf("La fecha es invalida");
    }

    int diasMes = mesMax(m, a);
    if (d == diasMes)
    {
        if (m == 12)
        {
            d = 1;
            m = 1;
            a++;
        }
        else
        {
            d = 1;
            m++;
        }
    }
    else
        d++;
    {
        printf("La fecha siguiente es: %d/%d/%d", d, m, a);
        fwrite(&d, sizeof(int), 1, fichero);
        fwrite(&m, sizeof(int), 1, fichero);
        fwrite(&a, sizeof(int), 1, fichero);
    }
    fclose(fichero);
    return 0;
}
