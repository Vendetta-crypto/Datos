#include <stdio.h>
#include <stdlib.h>
main()
{
    char cadena1[] = "Aprender a programar \n";
    char cadena2[] = "requiere esfuerzo \n";
    char cadena3[] = "y dedicacion ;)";
    FILE *fichero;
    fichero = fopen("pollito.txt", "w+");
    fputs(cadena1, fichero);
    fputs(cadena2, fichero);
    fputs(cadena3, fichero);
    fclose(fichero);
    printf("Proceso completado");
    return 0;
}