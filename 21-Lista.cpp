#include <stdio.h>
#include <stdlib.h>

struct Nodo
{
    int calificacion;
    char nombre[15];
    struct Nodo *siguiente;
};

int main()
{
    int opcion;
    Nodo *primerNodo = NULL;
    Nodo *ultimoNodo;
    Nodo *auxiliar;
    while (true)
    {
        system("cls");
        printf("1-Insertar datos\n");
        printf("2-Mostrar datos\n");
        printf("Opcion: ");
        scanf("%d", &opcion);
        system("cls");
        switch (opcion)
        {
        case 1:
        {
            if (primerNodo == NULL)
            {
                primerNodo = new (Nodo);
                //printf("Ingresa el nombre: ");
                //scanf("%s", &primerNodo->nombre);
                printf("Ingresa la calificacion: ");
                scanf("%d", &primerNodo->calificacion);
                primerNodo->siguiente = NULL;
                ultimoNodo = primerNodo;
            }
            else
            {
                auxiliar = new (Nodo);
                //printf("Ingresa el nombre: ");
                //scanf("%s", &auxiliar->nombre);
                printf("Ingresa la calificacion: ");
                scanf("%d", &auxiliar->calificacion);
                auxiliar->siguiente = NULL;
                ultimoNodo->siguiente = auxiliar;
                ultimoNodo = auxiliar;
            }
            break;
        }
        case 2:
        {
            printf("Impresion de datos\n");
            auxiliar = primerNodo;
            if (auxiliar == NULL)
            {
                printf("La lista esta vacia");
            }
            else
            {
                while (auxiliar != NULL)
                {
                    //printf("EL nombre es: %s\t", auxiliar->nombre);
                    printf("La calificacion es: %d\n", auxiliar->calificacion);
                    auxiliar = auxiliar->siguiente;
                }
            }
        }
        break;
        }
        system("pause");
    }
    return 0;
}