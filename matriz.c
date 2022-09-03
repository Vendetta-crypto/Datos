/*raeliizar un programa que permita alamcenar los valores del */
#include <stdio.h>
#include <stdlib.h>
int cauadro[3][3];

main()
{
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            printf("ingresa un numero: ");
            scanf("%d", &cauadro[i][j]);
        }
    }
    printf("cauadro\n");
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {

            printf("%d\t", cauadro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
