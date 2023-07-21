#include<stdio.h>
int main()
{
    int n,i=0,j,count=0,count1=0;
    //int num[32];
    scanf("%d",&n);
   /* while(n>0)
    {
      num[i]=n%2;
      n/=2;
      i++;
    }
   for(j=i-1;j>=0;j--)
    {
        printf("%d",num[j]);
    }*/
    while(n>0)
    {
        if(n&1)
        {
            count++;
        }
        else
        {
            count1++;
        }
        n=n>>1;
    }
    printf("%d\n%d",count,count1);
}
