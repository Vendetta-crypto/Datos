#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct
{
    char nombre[25];
    char direccion[30];
    char ciudad[20];
    char telefono[10];
    char tipo_comida[20];
    char plato_caro[15];
    char plato_barato[15];
    char categoria[1];
} restaurante;
int main()
{
    FILE *fichero;

    if ((fichero = fopen("Restaurante.txt", "a+")) == NULL)
    {
        printf("No se puede abrir el fichero.\n");
        exit(1);
    }
    
    printf("_________________________________________________________________\n");
    for ( int i = 0; i < 1; i++)
    {
        printf("Ingresa el nombre del resturante: ");
        fflush(stdin);
        gets(restaurante.nombre);
        printf("Ingresa la direccion del restaurante: ");
        fflush(stdin);
        gets(restaurante.direccion);
        printf("Ingresa la ciudad donde se encuntra el resturante: ");
        fflush(stdin);
        gets(restaurante.ciudad);
        printf("Ingresa el numero telefonico: ");
        fflush(stdin);
        gets(restaurante.telefono);
        printf("Ingresa el tipo de comida que sirve: ");
        fflush(stdin);
        gets(restaurante.tipo_comida);
        printf("Ingresa el precio del plato mas caro: ");
        fflush(stdin);
        gets(restaurante.plato_caro);
        printf("Ingresa el precio del plato mas barato: ");
        fflush(stdin);
        gets(restaurante.plato_barato);
        printf("Ingresa el numero de tenedores que tiene el resturante (Categoria): ");
        fflush(stdin);
        gets(restaurante.categoria);

        /*Guarda en el fichero*/
        fwrite(&restaurante, sizeof(restaurante), 1, fichero);
    }
    fclose(fichero);
    
}
