#include <stdio.h>

int main()
{
    int n,m=1,i,j;
    printf("Enter the number of rows");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
      for(j=1;j<=i;j++)
      {
          printf("*");
      }
      printf("\n");
    }

    return 0;
}

for(i=1;i<=n;i++)
	{
for(j=1;j<=(n*2-i*2);j++)
		{
		   printf(" ");
		}
	{
		for(j=1;j<=i;j++)
		{
		       printf("*");
		}
		printf("\n");
