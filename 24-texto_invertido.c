#include <stdio.h>
#include <string.h>
void invertir(char texto1[100], char text02[100]);
int main()
{
    char cadena[100], cadenaInvertida[100];

    printf("Introduzca una cadena de como máximo 100 caracteres: ");
    gets(cadena);
    invertir(cadena, cadenaInvertida);
    printf("La cadena invertida es %s. ", cadenaInvertida);

    return 0;
}
void invertir(char texto1[100], char text02[100])
{
    int longitud, i, j;
    longitud = strlen(texto1);
    j = longitud - 1;
    for (i = 0; i < longitud; i++)
    {
        text02[i] = texto1[j];
        j--;
    }
    text02[longitud] = '\0';
    return;
}