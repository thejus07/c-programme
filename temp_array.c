#include<stdio.h>
int main()
{
int a[100],i,j,n;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0,j=n-1;i<n/2;i++,j--)
{
int temp;
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
return 0;
}
