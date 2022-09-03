#include<stdio.h>
#include<stdlib.h>
int sum(int a, int b);
int main()
{
    int num1, num2;
    printf("Introduce un numero entero: ");
    scanf("%d",&num1);
    printf("introduce otro numero entero: ");
    scanf("%d",&num2);
    printf("La suma es: %d",sum(num1,num2));
    return 0;
}
int sum(int a, int b){
    int c;
    return c = a+b;
}
