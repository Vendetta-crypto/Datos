#include <stdio.h>
#include <conio.h>
struct dir
{
    char calle[5];
    int numero;
    char localidad[15];
};
struct paciente
{
    char nss[15];
    char nombre[20];
    char ape_paterno[20];
    char ape_materno[20];
    int edad;
    struct dir dire;
    int tele;
    char consultorio[2];
};

int main()
{
    struct paciente paci[2];
    struct paciente *pas;
    pas = &paci;
    int i;
    for (i = 0; i <= 2; i++)
    {
        printf("Ingresa los datos del paciente\n");
        printf("Ingresa el numero de seguro social: ");
        scanf("%s", &pas->nss);
        printf("Ingresa el nombre:");
        scanf("%s", &pas->nombre);
        printf("Ingresa el apellido paterno: ");
        scanf("%s", &pas->ape_paterno);
        printf("Ingresa el apellido materno: ");
        scanf("%s", &pas->ape_materno);
        printf("Ingresa la edad: ");
        scanf("%d", &pas->edad);
        printf("Ingresa la calle: ");
        scanf("%s", &pas->dire.calle);
        printf("Ingresa el numero: ");
        scanf("%d", &pas->dire.numero);
        printf("Ingresa la localidad: ");
        scanf("%s", &pas->dire.localidad);
        printf("Ingresa el telefono: ");
        scanf("%d", &pas->tele);
        printf("Ingresa el consultorio: ");
        scanf("%s", &pas->consultorio);
    }
    for (i = 0; i <= 2; i++)
    {
        printf("Los datos del paciente son\n");
        printf("Numero de seguro social: %s \n", &pas->nss);
        printf("Nombre: %s \n", pas->nombre);
        printf("Apellido paterno: %s \n", pas->ape_paterno);
        printf("Apellido materno: %s \n", pas->ape_materno);
        printf("Edad: %d \n", pas->edad);
        printf("Direccion: %s \n", pas->dire);
        printf("Telefono: %d \n", pas->tele);
        printf("Consultorio: %s", pas->consultorio);
    }
    return 0;
}
