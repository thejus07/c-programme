#include<stdio.h>

int main()
{
    int x,y,m,n;

    printf("Enter no of row for 1st Matrix : ");
    scanf("%d",&x);
    printf("Enter no of column for 1st Matrix : ");
    scanf("%d",&y);

    printf("Enter no of row for 2nd Matrix : ");
    scanf("%d",&m);
    printf("Enter no of column for 2nd Matrix : ");
    scanf("%d",&n);

    if(y==m)
    {
        int a[x][y];
        int b[m][n];

        int i,j,k;

        printf("Enter Element for 1st Matrix :\n");

        for(i=0; i<x; i++)
        {
            for(j=0; j<y; j++)
            {
                scanf("%d",&a[i][j]);
            }
        }

        printf("Enter Element for 2nd Matrix :\n");
        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                scanf("%d",&b[i][j]);
            }
        }

        int c[x][n];
        int sum;

        printf("Multiplication is :\n");

        for(i=0; i<x; i++)
        {
            for(j=0; j<y; j++)
            {
                for(k=0; k<x; k++)
                {
                    sum=sum+a[i][k]*b[k][j];

                }
                c[i][j]=sum;
                sum=0;

            }
        }

        for(i=0; i<x; i++)
        {
            for(j=0; j<n; j++)
            {
                printf("%d ",c[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Multiplication cannot be performed");
    }
}
