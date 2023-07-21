#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n+1;j++)
        {
            if(i==1 || i==5)
            {
                printf("*");
            }
             else if(i==n || i==n+1)
            {
                printf("@");
            }
}
printf("\n");
    }
}
 /*for(k=2;k<=n-1;k++)
    {
        for(j=1;j<=n+1;j++)
        {
            if(j==n || j==n+1)
            {
                printf("@");
            }
}
printf("\n");
    }
}
}*/
