#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int numero;
    printf("Introduce un numero: ");
    scanf("%d", &numero);
    if (numero == 5)
    {
        for (int x = 0; x < 6; x++)
        {
            for (int i = 1; i < 6; i++)
            {
                printf("%d", i);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Lo siento no puedo mostrar la imagen");
    }
    return 0;
}