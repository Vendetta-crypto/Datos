#include <stdio.h>
#include <stdlib.h>
float area_circulo(int r);
int area_cuadrado(int la);
interesante();
mensaje();
int suma_array(int a[]);
int main()
{
    int a[3] = {5, 8, 10};
    printf("El area del circulo es: %2.2f\n", area_circulo(5));
    printf("El area del cuadrado es: %d\n", area_cuadrado(6));
    printf("La suma de los elementos es: %d\n", suma_array(a));
    printf("Cual es mi mensaje: ");
    printf(interesante());
    printf("Feliz regreso ");
    printf(mensaje());

    return 0;
}
float area_circulo(int r)
{
    return (3.2426 * (r * r));
}
int area_cuadrado(int la)
{
    return (la * la);
}
interesante()
{
    printf("Me gusta le gente estudiante, me caen bien\n");
}
mensaje()
{
    char pala[8] = {"jovenes"};
    printf("%s", pala);
}

int suma_array(int a[])
{
    int sum = 0;
    for (int x = 0; x <= 2; x++)
    {
        sum += a[x];
    }
    return sum;
}
