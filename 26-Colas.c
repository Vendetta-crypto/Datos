#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int col[3], inicio = 0, fin = 0, i;

int insertar()
{
    if (fin <= 2)
    {
        printf("introduce el dato: ");
        scanf("%d", &col[fin]);
        fin++;
    }
    else
    {
        printf("No hay espacio");
    }
    return fin;
}

int eliminar(int inicio)
{

    if (inicio != fin)
    {

        printf("elemento eliminado\n");
        col[inicio] = 0;
    }
    else
    {
        printf("la cola esta vacia\n");
    }
    inicio++;

    return inicio;
}
int imprimir_datos(int inicio, int fin)
{

    if (inicio == fin)
    {
        printf("la cola esta vacia\n\n");
    }
    else
    {

        for (i = inicio; i <= fin - 1; i++)
        {
            printf("%d\n", col[i]);
        }
    }
}
main()
{
    int opcion;
    do
    {
        system("cls");
        printf("1-Insertar\n");
        printf("2-Eliminar\n");
        printf("3-Imprimir\n");
        printf("4-Salir\n");
        printf("Opcion:");
        scanf("%d", &opcion);
        switch (opcion)
        {
        case 1:
            insertar();
            break;
        case 2:
            eliminar(inicio);
            break;
        case 3:
            imprimir_datos(inicio, fin);
            break;
        case 4:
            exit(0);
            break;
        default:
            ("operacion no valida\n");
        }
        printf("deseas realizar otra operacion (Si-1/No-0) \n");
        opcion = 0;
        scanf("%d", &opcion);
    } while (opcion != 0);
    return 0;
}