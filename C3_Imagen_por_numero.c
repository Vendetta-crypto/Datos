#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int numero;
    printf("Introduce un numero: ");
    scanf("%d", &numero);
    if (numero == 8)
    {
        for (int x = 0; x < 9; x++)
        {
            for (int i = 0; i < 9; i++)
            {
                printf("*");
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
