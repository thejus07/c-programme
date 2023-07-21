#include<stdio.h>
int main()
{
int a[100],n,i,sum=0,sum1=0,total;
scanf("%d",&n);
for(i=0;i<n-1;i++)
{
scanf("%d",&a[i]);
sum+=a[i];
}
for(i=1;i<=n;i++)
{
sum1+=i;
}
total=sum1-sum;
printf("%d",total);
return 0;
}

