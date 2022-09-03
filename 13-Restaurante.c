#include<stdio.h>
#include<stdlib.h>
struct restaurante
{
    char nombre[25];
    char direccion[30];
    char ciudad[20];
    char telefono[10];
    char tipo_comida[20];
    char plato_caro[15];
    char plato_barato[15];
    char categoria[1];
};
int main()
{
    int i;
    struct restaurante datos;
    printf("_________________________________________________________________\n");
    printf("Ingresa el nombre del resturante: ");
    scanf("%s",&datos.nombre);
    printf("Ingresa la direccion del restaurante: ");
    scanf("%s",&datos.direccion);
    printf("Ingresa la ciudad donde se encuntra el resturante: ");
    scanf("%s",&datos.ciudad);
    printf("Ingresa el numero telefonico: ");
    scanf("%s",&datos.telefono);
    printf("Ingresa el tipo de comida que sirve: ");
    scanf("%s",&datos.tipo_comida);
    printf("Ingresa el precio del plato mas caro: ");
    scanf("%s",&datos.plato_caro);
    printf("Ingresa el precio del plato mas barato: ");
    scanf("%s",&datos.plato_barato);
    printf("Ingresa el numero de tenedores que tiene el resturante (Categoria): ");
    scanf("%s",&datos.categoria);

    printf("los datos ingresados son\n");
    printf("Nombre: %s\n",datos.nombre);
    printf("Direccion: %s\n",datos.direccion);
    printf("Ciudad: %s\n",datos.ciudad);
    printf("Telefono: %s\n",datos.telefono);
    printf("Tipo de comida: %s\n",datos.tipo_comida);
    printf("Plato mas caro: %s\n",datos.plato_caro);
    printf("Plato mas barato: %s\n",datos.plato_barato);
    printf("Categoria: %s",datos.categoria);
    return 0;
}

