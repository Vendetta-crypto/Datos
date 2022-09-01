/*llenar y mostar un arreglo de 5 edades mediante 2 funciones*/
#include<stdio.h>
#include<stdlib.h>
int edad[5],i;
int llenado();
impresion(int edad[]);
main(){
    llenado();
    impresion(edad);
    return 0;
}

int llenado(){
    for (int i=0; i<=4; i++)
    {
            printf("ingresa un numero: ");
            scanf("%d",&edad[i]);
    }
    return edad;

}

impresion(int edad[]){
    for (int i=0; i<=4; i++)
    {
            printf("posicion %d el valor es %d\n",i+1,edad[i]);
    }

}
