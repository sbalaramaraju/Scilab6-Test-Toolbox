#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,m,i,j;
    printf("Enter the values of n and m");
    scanf("%d%d",&n,&m);
    int matrix[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    int transpose(matrix,n,m);
    return 0;
}