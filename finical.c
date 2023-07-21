#include<stdio.h>
int main()
{
    int n,res=2,i;
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
         printf("%d",res);
         res+=2;
     }
    }
}
