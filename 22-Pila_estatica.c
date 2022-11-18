#include<stdio.h>
#include<stdlib.h>
int tope=0,i,pila[5];
int inserta_dato()
{
    if(tope<=4)
    {
        printf("Introduce el dato: ");
        scanf("%d",&pila[tope]);
        tope++;
    }
    else
    {
        printf("No hay espacio en la pila!!!");
    }

    return tope-1;
}

int eliminar_dato(int tope)
{

    if (tope>=0)
    {

        printf("*****Elemento eliminado*****");
        pila[tope-1]=0;
        tope--;
    }
    else
    {
        printf("La pila esta vacia");
    }

    return tope;
}
main()
{

    int j,k;
    do
    {
        system("cls");
        printf("1-Insertar\n ");
        printf("2-Eliminar\n ");
        printf("Elige la opcion: ");
        scanf("%d",&j);
        switch(j)
        {
        case 1:
            inserta_dato();
            break;
        case 2:
            eliminar_dato(tope);
            break;
        default:
            printf("Operacion no valida\n");
        }
        printf("Deseas realizar otra operacion\n");
        printf("1-Si/0-No: ");
        scanf("%d",&k);
    }
    while(k!=0);
        return 0;
}


