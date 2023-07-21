#include<stdio.h>
int main()
{
    int a[100][100];
    int i,j,r,c,r1,c1;
    scanf("%d %d",&r,&c);
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    {
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                printf("%d",a[i] [j]);
            }

        printf("\n");
    }
    {
            scanf("%d %d",&r1,&c1);
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    {
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c1; j++)
            {
                printf("%d",a[i][j]);
            }

        printf("\n");
    }
    }
    return 0;
    }
    }
}
