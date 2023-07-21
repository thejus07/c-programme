#include <stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for (i=1;i<n;i++)
    {
        for (j=1;j<n;j++)
        {
            printf("*");
        }
        for(i=1;i<k-1;i--)
        {
            for(j=1;j<k-1;j--)
            {
                printf("*");
            }
        }


    }
}
