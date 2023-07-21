#include<stdio.h>
int main()
{
int n,i,j;
scanf("%d",&n);
for(i=1;i<=n;i++,printf("\n"))
{
    for(j=1;j<=n+1;j++)
    {
        if(i%2!=0 && j==n+1 )
          printf("%d",i+1);
       else if(j==1 && i%2==0 )
                printf("%d",i+1);
        else
            printf("%d",i);
    }
}
}
