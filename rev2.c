#include<stdio.h>
int main()
{
int n,i,temp=0;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=n-1;i>=0;i--)
{
temp=temp*10+a[i];
}
int b;
scanf("%d",&b);
printf("%d",temp+b);
}
