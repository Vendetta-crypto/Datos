#include<stdio.h>
#include<stdlib.h>
//Hernandez Hernandez Erik Jose
main()
{
    int M[3][3]= {8,3,1,9,2,5,6,7,4};
    int m[3][3]= {-1,8,10,15,11,12,14,17,21};
    int n[3][3];
    int i,j;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            n[i][j]=M[i][j]+m[i][j];
        }
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d\t",n[i][j]);
        }
        printf("\n");
    }
    return 0;
}
