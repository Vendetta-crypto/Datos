#include <stdio.h>
#include <conio.h>
int main()
{
    int factorial = 0;
    printf("Ingresa el numero para calcular el factorial ");
    scanf("%d", &factorial);
    int facM = factorial - 1;
    int resultado = factorial;
    while (facM >= 1)
    {
        resultado = resultado * facM;
        facM--;
    }

    printf("El factorial de %d es: %d ", factorial, resultado);
    return 0;
}
