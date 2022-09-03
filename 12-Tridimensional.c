#include <stdio.h>
#include <stdlib.h>
int main()
{
    int M[3][3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
                      11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
                      21, 22, 23, 24, 25, 26, 27};
    int i, j, k;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                printf("%d\t", M[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}