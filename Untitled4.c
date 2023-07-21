#include <stdio.h>
int main()
{
   int i,j,k;
   printf("Enter the number of rows: ");
   scanf("%d",&k);
   for (i=0;i<k;i++)
   {
      for(j=0;j<k;j++)
      {
           if(i==0||i==k-1||j==0||j==k-1)
                {
                    printf("*");
                }
           else{
                 printf(" ");
                }
      }
      printf("\n");
   }
   return 0;
}

