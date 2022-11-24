#include <stdio.h>
#include <stdlib.h>
#define MAX 1000
int opcion = 0, i, j, aux, opcionuno;
int numeros[] = {4, 1, 2, 3, 5};
void quickSort(int[], int);
void print(int[], int);
/*int main()
{
    int numeros[] = {4, 1, 2, 3, 5};
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
    printf("Los elementos en el array son: 4,1,2,3,5\n");
    printf("1-Ordenacion de burbuja\n");
    printf("2-Ordenacion Quicksort\n");
    printf("Orden ascendente\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d,", numeros[i]);
    }
    return 0;
}*/
int main()
{
    int n;
    printf("Los elementos en el array son: 4,1,2,3,5\n");
    printf("1-Ordenacion de burbuja\n");
    printf("2-Ordenacion Quicksort\n");
    printf("Ingresa el numero de lementos: ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Ingresa el elmento: ");
        scanf("%d", &a[i]);
    }
    quickSort(a, n);
    print(a, n);
}

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