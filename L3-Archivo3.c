#include <stdio.h>
#include <stdlib.h>

main()
{
    FILE *pf;
    char letra;
    pf = fopen("datos.txt", "a+");       // se crea el archivo
    if (!(pf = fopen("datos.txt", "r"))) /* controlamos si se produce un error */
    {
        printf("Error al abrir el fichero");
        exit(0); /* abandonamos el programa */
    }
    else
    {
        printf("yo puedo escribir\n");
        letra = fgetc(pf);
        printf("%s", letra);
        fclose(pf);
    }
    return 0;
}