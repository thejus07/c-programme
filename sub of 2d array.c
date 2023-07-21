#include<stdio.h>
int main()
{
    int a[100][100];
    int b[100][100];
    int c[100][100];
    int i,j,row,col,row1,col1;
    scanf("%d %d",&row,&col);
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    {
        for(i=0; i<row; i++)
        {
            for(j=0; j<col; j++)
            {
                printf("%d ",a[i][j]);
            }

        printf("\n");
    }
    {
            scanf("%d %d",&row1,&col1);
    for(i=0; i<row1; i++)
    {
        for(j=0; j<col1; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    { for(i=0; i<row1; i++)
        {
            for(j=0; j<col1; j++)
            {
                printf("%d ",b[i][j]);
            }
            printf("\n");
    }
}
if(row==col)
    {
        for(i=0; i<row1; i++)
        {
            for(j=0; j<col1; j++)
            {
                printf("%d ",c[i][j]=a[i][j]-b[i][j]);
            }

        printf("\n");
    }
    return 0;
}
}
    }
}
