
#include<stdio.h>
int main()
{
    int n,res=2,i,j;
    scanf("%d",&n);
    int price[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&price[i]);
    }
    printf("1");
    for(i=1;i<n;i++)
    {
     if(price[i-1]>price[i])
     {
         printf("1");
     }
     else
     {
         int count=1;
         for(j=i-1;j=0;j--)
         {
             if(price[j]>price[i])
             {
                 printf("%d ",count);
                 break;
             }
             count++;
         }

     }
    }
}
