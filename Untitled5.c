#include <stdio.h>
int main()
{
    int r,c,a[3][3],b[3][3],sum[3][3],i,j;
    printf("Enter the number of rows and columns:\n");
    scanf("%d%d",&r,&c);
    printf("enter element of first matrix:");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);

        }

    }
    printf("Enter the elements of second matrix:");
      for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);

        }

    }
    printf("addition of matrix:");
       for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
            printf("%d\n",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}

