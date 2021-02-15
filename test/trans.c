//Stand alone c function to compute transpose of a nxm matrix
#include<stdio.h>
#include<stdlib.h>

int transpose(int matrix[][m], int n, int m)
{
    int i,j,trans[n][m];
    for(i=0;i<n;i++)
    {
        for(j=i;j<m;j++)
        {
            trans[i][j]=matrix[j][i];
        }
    }
    printf("Transpose of a matrix is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",trans[i][j]);
        }
        printf("\n");
    }
    return 0;
}