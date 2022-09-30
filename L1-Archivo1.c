#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fichero;
    fichero = fopen("patito.txt","w+");
    fputs("Esta es la unidad de archivos \n",fichero);
    fputs("Es importante que memoricen las funciones\n",fichero);
    fputs("Y de mucha practica",fichero);
    fclose(fichero);
    printf("Terminamos");
    return 0;
}
