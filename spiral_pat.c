#include<stdio.h>
int main()
{
    int i,j,n,count=0;
    scanf("%d",&n);
    int a[n][n];
    for(i=1;i<=n;i++)
    {
        scanf("%d",a[i]);
    }
    int c_min=1,c_max=n,r_min=1,r_max=n;
    while(r_min<=r_max)
    {
        for(i=c_min;i<=c_max;i++)
        {
            printf("%d",a[r_min][i]);
        }
        r_min++;
        for(i=r_min+1;i<=r_max;i++)
        {
            printf("%d",a[i][c_max]);
        }c_max--;
        for(i=c_max-1;i>=c_min;i--)
        {
            printf("%d",a[r_max][i]);
        }r_max--;
        for(i=r_max-1;i>=r_min;i--)
        {
         printf("%d",a[i][c_min]);
        }c_min++;
    }
    printf("\n");
}
