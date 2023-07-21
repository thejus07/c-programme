#include<stdio.h>
int main()
{
    int row,col,i,j,b,a[100][100];
    scanf("%d %d",&row,&col);
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<row;i++)
    {
       int b=0;
        for(j=0;j<col;j++)
        {
            b=b+a[i][j];
        }
         printf("%d\t",b);
    }
    printf("\n");
    for(i=0;i<row;i++)
    {
       int b1=0;
        for(j=0;j<col;j++)
        {
            b1=b1+a[j][i];
        }
         printf("%d\t",b1);
    }
    return 0;
}
