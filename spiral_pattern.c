#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    int a[n][n];
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            printf("%d",a[i][j]);
        }
        break;
    }
    for(j=n;j>1;j++)
    {
        for(i=2;i<=n;i++)
        {
            printf("%d",a[i][j]);
        }
        break;
    }
}
