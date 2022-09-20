#include <stdio.h>
#include <stdlib.h>

int factorial = 0;
int resultado = 1;
int num_fact(int n)
{
    if (n > 0)
    {
        resultado = resultado * n;
        return (num_fact(n - 1));
    }
    else
    {
        return (resultado);
    }
}
int main()
{
    int n = 0;
    printf("Ingrese un numero: ");
    scanf("%d", &n);
    printf("EL fatorial es: %d", num_fact(n));
    return 0;
}