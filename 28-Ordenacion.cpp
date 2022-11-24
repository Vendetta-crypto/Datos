#include <stdio.h>
#include <stdlib.h>
#define MAX 1000
int opcion=0,i,j,aux,opcionuno,n,a[];
int numeros[]={4,1,2,3,5};
using namespace std;
char flag;
void quickSort(int[], int);
void print(int[], int);
///int burbuja();
int main()
{
    do
    {
        system("cls");
        printf("Los elementos en el array son: 4,1,2,3,5\n");
        printf("1-Ordenacion de burbuja\n");
        printf("2-Ordenacion Quicksort\n");

        printf("Ingresa una opcion: ");
        scanf("%d", &opcion);
        switch (opcion)
        {
        case 1:
            //burbuja();
            break;
        case 2:
        printf("Ingresa el numero de lementos: ");
        scanf("%d",&a[n]);
        //a[n];
        for ( i = 0; i < n; i++)
        {
            printf("Ingresa el elmento: ");
            scanf("%d",&a[i]);
        }
        quickSort(a,n);
        print(a,n);

        default:
            printf("Opcion no valida");
            break;
        }
         printf("Deseas realizar otra operacion\n");
        printf("1-Si/0-No: ");
        opcion = 0;
        scanf("%d", &opcion);
    } while (opcionuno != 0);
    return 0;
}

/*int burbuja()
{
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (numeros[j] > numeros[j + 1])
            {
                aux = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = aux;
            }
        }
    }

    printf("ascendente o decendente: ");
    scanf("%c", &flag);
    printf("Orden ascendente\n");
    if (flag == 'a')
    {
        for (i = 0; i < 5; i++)
        {
            printf("%d,", numeros[i]);
        }
        // return numeros[i];
    }
    else if (flag == 'd')
    {
        printf("Orden descendente");
        for (i = 4; i >= 0; i++)
        {
            printf("%d", numeros[i]);
        }
        // return numeros[i];
    }
}*/

void quickSort(int a[], int n)
{
    int tope, ini, fin, pos;
    int may[MAX], menor[MAX];
    tope = 0;
    menor[tope] = 0;
    may[tope] = n - 1;
    while (tope >= 0)
    {
        ini = menor[tope];
        fin = may[tope];
        tope--;

        int izq, der, aux;
        bool band;
        izq = ini;
        der = fin;
        pos = ini;

        band = true;

        while (band == true)
        {
            while ((a[pos] < a[der]) && (pos != der))
                der--;

            if (pos == der)
                band = false;
            else
            {
                aux = a[pos];
                a[pos] = a[der];
                a[der] = aux;
                pos = der;
            }

            while ((a[pos] > a[izq]) && (pos != izq))
                izq++;

            if (pos == izq)
                band = false;
            else
            {
                aux = a[pos];
                a[pos] = a[izq];
                a[izq] = aux;
                pos = izq;
            }
        }

        if (ini <= (pos - 1))
        {
            tope++;
            menor[tope] = ini;
            may[tope] = pos - 1;
        }

        if (fin >= (pos + 1))
        {
            tope++;
            menor[tope] = pos + 1;
            may[tope] = fin;
        }
    }
}

void print(int a[], int n)
{
    printf("Elementos ordenados\n");
    for (int i = 0; i < n; i++)
    {
        printf("[%d]",a[i]);
    }
}