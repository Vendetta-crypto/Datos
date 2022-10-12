//LISTA ENLAZADA
#include <stdio.h>
#include <stdlib.h>
//#include <windows.h>
#include <conio.h>

typedef struct nodo
{
	int info;
	struct nodo *sig;
} nodoL;

// Alias para lista
typedef nodoL *lista;

void insFront(lista *L, int n);/* inserta el valor n al frente de la lista */
int mostrar(nodoL *L);/* muestra por pantalla los valores de L, en forma recursiva */
void borrar(lista *L);/*borra un elemento de la lista*/

int main()
{
	//Se declara y asigna una la variable para controlar la opción selecionada en el menú.
	int op=-1;
	//Se declara una lista.
	lista milista=NULL;
	//Mientras op se distinto de 0 (Cuando es op=0 finaliza el programa.
	while(op)
	{
		system("cls"); //Borrar la pantalla.
		//Mostrar en pantalla las opciones del menú.
		printf("\t\tEjemplo  con Listas\n\n\tSeleccione una opcion\n\n\t1. Agregar elemento al frente\n\t2. Mostrar lista\n\t3. Borrar un elemento\n\t0. Salir\n");
		scanf("%d",&op); //Captura el numero opción selecionada.
		switch(op) //Ir a la opción indicada por el usuario.
		{
			//Ingresar un valor al comienzo de la lista.
		case 1:
		{
			int numNuevo;//Crear una variable para el numero a insertar en la lista.
			system("cls");//Borrar la pantalla.
			printf("Ingrese el numero para agregar a la lista:\n");//Pedir por pantalla un numero para insertar en la lista.
			scanf("%d",&numNuevo);//Capturar el número a insertar en la lista.
			system("cls");//Borrar la pantalla.
			insFront(&milista,numNuevo);//LLamara al procedimiento que inserta un numero al comienzo de la lista.
			getch(); //Esperar que el usuario presione una tecla.
			break;
		}
		case 2:
		{
			system("cls");
			//Mostrar en pantalla un titulo.
			printf("Los numeros cargados en la lista:\n\n");
			mostrar(milista);
			getch();
			break;
		}
		//Eliminar un número de la lista.
		case 3:
		{
			int n; //Crear un varible que almacene el número a borrar de la lista.
			system("cls");//Borrar la pantalla.
			borrar(&milista); //LLamar a la función borrar.
			getch(); //Esperar que el usuario presione una tecla.
			break;
		}
		}
	}
	return 0;
}

void insFront (lista *L, int n){
	lista aux = malloc(sizeof(nodoL)); //Crear un nuevo nodo.
	aux -> info = n; //Asignar el valor al nodo.
	aux -> sig = *L; //Apuntar el nodo al nodo que apuntaba la lista.
	*L=aux; //Hacer que la lista apunte al nodo nuevo.
	printf("Se agrego el %d a la lista\n",n); //Escribir en pantalla que se agregó el valor a la lista.
}/* inserta el valor n al frente de la lista */

int mostrar(nodoL *L){

		if (L==NULL)
        {
            printf("La lista esta vacia\n");
        }
        else{
		while (L != NULL) {
      printf(" |%d|->",L->info);
      L = L -> sig;
       }
	}
}
void borrar(lista *L){
	lista frente = *L; //puntero auxiliar al primer nodo
	frente->info=*L;
	(*L) = (*L) -> sig; //hago apuntar l al siguiente nodo
	free(frente);   //elimino el primer nodo de la memoria
}