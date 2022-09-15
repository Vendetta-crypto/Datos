#include <stdio.h>
#include <stdlib.h>
float Acirculo(float r);
int Acuadrado(int L);
int Atriangulo(int b, int h);
int Arectangulo(int b, int h);
int Arombo(int D, int d);
int numero, lado, base, altura, radio, Dmayor, dmenor, area;
int main()
{
    printf("Selecciona una opcion\n");
    printf("1-Circulo\n2-Cuadrado\n3-Triangulo\n4-Rectangulo\n5-Rombo\n6-Salida");
    printf("Que area va a calcular: ");
    scanf("%d", &numero);
    switch (numero)
    {
    case 1:
        printf("Area del Circulo\n");
        printf("ingresa el radio: ");
        scanf("%f", &radio);
        printf("El area es: %f", Acirculo(radio));
        break;
    case 2:
        printf("Area del Cuadrado\n");
        printf("ingresa el lado: ");
        scanf("%d", &lado);
        printf("El area es: %d", Acuadrado(lado));
        break;
    case 3:
        printf("Area del Triangulo\n");
        printf("ingresa la base y la altura: ");
        scanf("%d,%d", &base, &altura);
        printf("El area es: %d", Atriangulo(base, altura));
        break;
    case 4:
        printf("Area del Rectangulo\n");
        printf("ingresa la base y la altura: ");
        scanf("%d,%d", &base, &altura);
        printf("El area es: %d", Arectangulo(base, altura));
        break;
    case 5:
        printf("Area del Rombo\n");
        printf("ingresa el diametro mayor y menor: ");
        scanf("%d,%d", &Dmayor, &dmenor);
        printf("El area es: %d", Arombo(Dmayor, dmenor));
        break;
    case 6:
        break;
    }
    return 0;
}
float Acirculo(float r)
{
    float area = 3.1416 * (r * r);
    return area;
}
int Acuadrado(int L)
{
    area = L * L;
    return area;
}
int Atriangulo(int b, int h)
{
    area = (b * h) / 2;
    return area;
}
int Arectangulo(int b, int h)
{
    area = b * h;
    return area;
}
int Arombo(int D, int d)
{
    area = (D * d) / 2;
    return area;
}
