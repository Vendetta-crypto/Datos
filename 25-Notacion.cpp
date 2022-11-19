#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define tam 20
int prioridad(char simbolo);
int main()
{
    int opcion, tope = -1, pos = -1, tamExpresion;
    int pila[tam], epos[tam],epre[tam];
    char expinf[tam], simbolo;
    do
    {
        printf("1-Convertir de Infija a Postfija\n");
        printf("2-Convertir de Infija a Prefija\n");
        printf("3-Salir\n");
        printf("Ingresa la opcion: ");
        scanf("%d", &opcion);
        switch (opcion)
        {
        case 1:
            system("cls");
            printf("Ingresa la expresion en notacion Infija: ");
            scanf("%s", &expinf);

            tope = -1;
            pos = -1;
            tamExpresion = strlen(expinf);
            for (int i = 0; i < tamExpresion; i++)
            {
                simbolo = expinf[i];
                if (simbolo == '(')
                {
                    tope = tope + 1;
                    pila[tope] = simbolo;
                }
                else if (simbolo == ')')
                {
                    while (pila[tope] != '(')
                    {
                        pos = pos + 1;
                        epos[pos] = pila[tope];
                        tope = tope - 1;
                    }
                    tope = tope - 1;
                }
                else if ((simbolo >= 'a') && (simbolo <= 'z') || (simbolo >= 'A') && (simbolo <= 'Z'))
                {
                    pos = pos + 1;
                    epos[pos] = simbolo;
                }
                else
                {
                    while (tope > -1 && (prioridad(simbolo) <= prioridad(pila[tope])))
                    {
                        pos = pos + 1;
                        epos[pos] = pila[tope];
                        tope = tope - 1;
                    }
                    tope = tope + 1;
                    pila[tope] = simbolo;
                }
            }
            while (tope > -1)
            {
                pos = pos + 1;
                epos[pos] = pila[tope];
                tope = tope - 1;
            }
            printf("La expresion Postfija es: ");
            for (int i = 0; i <= pos; i++)
            {
                printf("%c", epos[i]);
            }
            return 0;

            break;
        case 2:
            system("cls");
            printf("Ingresa la expresion en notacion Infija: ");
            scanf("%s", &expinf);

            tope = -1;
            pos = -1;
            tamExpresion = strlen(expinf);
            for (int i = tamExpresion-1; i >=0; i--)
            {
                simbolo = expinf[i];
                if (simbolo == ')')
                {
                    tope = tope + 1;
                    pila[tope] = simbolo;
                }
                else if (simbolo == '(')
                {
                    while (pila[tope] != ')')
                    {
                        pos = pos + 1;
                        epre[pos] = pila[tope];
                        tope = tope - 1;
                    }
                    tope = tope - 1;
                }
                else if ((simbolo >= 'a') && (simbolo <= 'z') || (simbolo >= 'A') && (simbolo <= 'Z'))
                {
                    pos = pos + 1;
                    epre[pos] = simbolo;
                }
                else
                {
                    while ((prioridad(simbolo) < prioridad(pila[tope])))
                    {
                        pos = pos + 1;
                        epre[pos] = pila[tope];
                        tope = tope - 1;
                    }
                    tope = tope + 1;
                    pila[tope] = simbolo;
                }
            }
            while (tope > -1)
            {
                pos = pos + 1;
                epre[pos] = pila[tope];
                tope = tope - 1;
            }
            printf("La expresion Prefija es: ");
            for (int i = pos; i >= 0; i--)
            {
                printf("%c", epre[i]);
            }
            return 0;

            break;

        default:
            printf("Opcion invalida");
            return 0;
            break;
        }
    } while (opcion != 3);
    return 0;
}

int prioridad(char simbolo)
{
    int priori;
    switch (simbolo)
    {
    case '^':
        priori = 3;
        break;
    case '/':
        priori = 2;
        break;
    case '*':
        priori = 2;
        break;
    case '-':
        priori = 1;
        break;
    case '+':
        priori = 1;
        break;
    case ')':
        priori = 0;
        break;
    case '(':
        priori = 0;
        break;
    }
    return priori;
}
