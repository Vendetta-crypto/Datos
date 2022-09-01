//puntero almacena la direccion en memoria de otra variable
#include<stdio.h>
#include<stdlib.h>
main(){
    int a =12;
    int *p1,*p3;
    p1= &a;
    p3=p1;
    printf("El valor del puntero 1 es: %d y su direccion: %d\n",*p1,p1);
    printf("El valor del puntero 3 es: %d y su direccion: %d\n ",*p1,p3);
    printf("El valor de la variable a es: %d y su direccion: %d",a,&a);
    return 0;

}
