#include <stdio.h>
int main()
{
    int n,j,k,i;
    scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       for(j=1;j<=n-1;j++)
       {
           printf(" ");
       }
       for(k=1;k<=2*i-1;k++)
       {
         printf("*");
       }

      printf("\n");
    }
}
