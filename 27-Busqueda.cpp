#include <stdio.h>
#include <stdlib.h>
int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int dato,nodoVal;
struct Nodo
{
    int valNodo;
    Nodo *derecha;
    Nodo *izquierda;
};

Nodo *crearNodo(int);
void insertarNodo(Nodo *&, int);
bool busqueda(Nodo *arbol, int);
Nodo *arbol =NULL;

int busqueda_secuenciasl(int valor1, int arreglo[]);
int busqueda_binaria(int valor2, int arreglo[]);

int main()
{

    int opcion,opArbol;
    do
    {
        system("cls");
        printf("Los elementos en el array son: 1,2,3,4,5,6,7,8,9,10\n");
        printf("1-Busqueda Secuencial\n");
        printf("2-Buesqueda Binaria\n");
        printf("3-Buequeda en Arboles\n");
        printf("4-Busuqeda en Hashing\n");
        printf("Ingresa una opcion: ");
        scanf("%d", &opcion);
        switch (opcion)
        {
        case 1:
            printf("\t*****Busqueda Secuencial*****\n");
            printf("Ingresa el dato a buscar: ");
            scanf("%d", &dato);
            busqueda_secuenciasl(dato, array);
            break;
        case 2:
            printf("\t*****Busqueda Binaria*****\n");
            printf("Ingresa el dato a buscar: ");
            scanf("%d", &dato);
            busqueda_binaria(dato, array);
            break;

        case 3:
            printf("\t*****Busqueda en Arboles*****\n");
            printf("\t*****LLenado de Arbol*****\n");
            do
            {
                printf("Ingresa el dato: ");
                scanf("%d", &nodoVal);
                insertarNodo(arbol, nodoVal);
                printf("Deseas realizar otra operacion\n");
                printf("1-Si/0-No: ");
                scanf("%d", &opArbol);

            } while (opArbol != 0);

            printf("Ingresa el dato a buscar: ");
            scanf("%d",&dato);
            if (busqueda(arbol, dato) == true)
            {
                printf("Elemento enocntrado\n");
            }
            else
            {
                printf("Elemento no encontrado");
            }
            break;
        case 4:
         printf("\t*****Busqueda HASHING*****\n");
         
        break;

        default:
            printf("Opcion no valida");
            break;
        }
        printf("Deseas realizar otra operacion\n");
        printf("1-Si/0-No: ");
        opcion = 0;
        scanf("%d", &opcion);

    } while (opcion != 0);
    return 0;
}

int busqueda_secuenciasl(int valor1, int arreglo[])
{
    int i = 0;
    char bandera = 'F';
    while ((bandera == 'F') && (i < 10))
    {
        if (arreglo[i] == valor1)
        {
            bandera = 'V';
        }
        i++;
    }
    if (bandera == 'F')
    {
        return printf("No existe el elemento\n");
    }
    else
    {
        return printf("El numero se encontro en la posicion: %d\n", i - 1);
    }
}

int busqueda_binaria(int valor2, int arreglo[])
{
    int inferior = 0, superior = 10, mitad;
    char bandera = 'F';
    while (inferior <= superior)
    {
        mitad = (inferior + superior) / 2;
        if (arreglo[mitad] == dato)
        {
            bandera = 'V';
            break;
        }
        if (arreglo[mitad] > valor2)
        {
            superior = mitad;
            mitad = (inferior + superior) / 2;
        }
        if (arreglo[mitad] < valor2)
        {
            inferior = mitad;
            mitad = (inferior + superior) / 2;
        }
    }
    if (bandera == 'V')
    {
        return printf("Se encontro el numero en la posicion: %d\n", mitad);
    }
    else
    {
        return printf("No se encontro\n");
    }
}

//arbol
Nodo *crearNodo(int n)
{
    Nodo *nuevo_nodo = new Nodo();

    nuevo_nodo->valNodo = n;
    nuevo_nodo->derecha = NULL;
    nuevo_nodo->izquierda = NULL;
    return nuevo_nodo;
}

void insertarNodo(Nodo *&arbol, int n)
{
    if (arbol == NULL)
    {
        Nodo *nuevo_nodo = crearNodo(n);
        arbol = nuevo_nodo;
    }
    else
    {
        int valorRaiz = arbol->valNodo;
        if (n < valorRaiz)
        {
            insertarNodo(arbol->izquierda, n);
        }
        else
        {
            insertarNodo(arbol->derecha, n);
        }
    }
}

bool busqueda(Nodo *arbol, int n)
{
    if (arbol == NULL)
    {
        return false;
    }
    else if (arbol->valNodo == n)
    {
        return true;
    }
    else if (n < arbol->valNodo)
    {
        return busqueda(arbol->izquierda, n);
    }
    else
    {
        return busqueda(arbol->derecha, n);
    }
}