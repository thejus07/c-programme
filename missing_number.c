#include<stdio.h>
int main()
{
int a[100],n,i;
scanf("%d",&n);
for(i=0;i<n-1;i++)
{
scanf("%d",&a[i]);
}
printf("the missing number is %d",getnum(a,n));
return 0;
}
int getnum(int a[100],int n)
{
int m=n,i;
int total=m*(m+1)/2;
int sum=0;
for(i=0;i<n-1;i++)
{
sum+=a[i];
}
return total-sum;
}

