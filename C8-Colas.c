/* operaciones con colas
*/

#include<stdio.h>
#include<conio.h>

/* estructura que define el nodo*/

typedef struct nodo
{
   int  dato;
   struct nodo *siguiente;
} Nodo;

typedef struct
 {
   Nodo *frente;
   Nodo *final;
} Cola;

colaVacia(Cola *cola){
if (cola!=NULL)
{printf("Ya existen elementos en la lista\n");
 }
 else
 {printf("la cola esta vacia\n");}
}

void insertar(Cola *cola,int  x) {
Nodo *nuevo;
nuevo =(Nodo *)malloc (sizeof(Nodo));
nuevo->dato=x;
nuevo->siguiente=nuevo; // Hace que el nodo que almacena el nuevo valor apunte hacia el mismo
if (colaVacia(&cola))
cola->frente = nuevo;
else
cola->final = nuevo;

}

void eliminar(Cola *cola){ // Se elimina el elemento que se encuentre al frente de la cola
Nodo *aux; // aux es un nodo auxiliar que contendrá el nodo a eliminar
int  temp;
if (!colaVacia(&cola))
{ aux =cola->frente;
temp = cola ->frente -> dato;
cola ->frente = cola ->frente ->siguiente;
printf("\nElemento eliminado %c ",temp);
free(aux);
}
else
printf("\n Error al eliminar en cola vacia ");
}

main()
{
 Cola *cola;
 int x=10;
  insertar(&cola,  x);
  printf("%d", *cola);
getch();
}