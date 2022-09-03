#include <stdio.h>
#include <stdlib.h>
int main()
{
    int M[3][3] = {1, 0, 0, 0, 1, 0, 0, 0, 1};
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", M[i][j]);
        }
        printf("\n");
    }
    return 0;
}
