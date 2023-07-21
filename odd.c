#include<stdio.h>
int main()
{
    int t,i,j=0,k=0;
    scanf("%d",&t);
    int a[t],a1[100],a2[100];
    for(i=0;i<t;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<t;i++)
    {
        if(a[i]%2==0)
        {
            a1[j]=a[i];
            j++;
        }
        else
        {
            a2[k]=a[i];
            k++;
        }
    }
   for(j=0;i<=j;j++)
   {
       printf("%d",a1[j]);
   }
   for(j=0;i<=k;k++)
   {
       printf("%d",a2[k]);
   }
}

