#include<stdio.h>
int main()
{
int n,c=0,k,sum,i;
scanf("%d",&n);
int b[n];
for(int i=1;i<=n;i++)
{
for(int j=2;j<=n/2;j++)
{
if(i%j==0)
{
c=1;
}
}
}
if(c==0)
{
b[k]=i;
k++;
}
for(i=0;i<=k;i++)
{
sum=sum+b[i];
if(sum==n)
{
break;
}
else
{
c++;
}}
printf("%d",c);
}
