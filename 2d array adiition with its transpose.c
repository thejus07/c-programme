#include <stdio.h>
int main()
{

    int a[10][10];
    int i,j,r1,r2,c1,c2;
    int sum[100][100];
    scanf("%d %d",&r1,&c1);
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for (j=0;j<r1;j++)
    {
        for(i=0;i<c1;i++)
        {
            printf("%d ",a[i][j]);
        }
            printf("\n");
    }
    for (i=0;i<r1;i++)
    {
        for (j=0;j<c1; j++)
            {
                sum[i][j] = a[[i]*[j]+[j]*[i]];
            }
    }
    for (i=0;i<r1;i++)
    {
        printf("%d ",a[i][j]);
    }
 printf("\n");
}
