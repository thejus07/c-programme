#include<stdio.h>
int main()
{
int n,i,j,temp;
printf("enter the size:");
scanf("%d",&n);
int arr[n];
printf("enter the element:\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(i=1;i<n;i++)
{
temp=arr[i];
j=i-1;
while(j>=0 && arr[j]>temp)
{
arr[j+1]=arr[j];
j--;
}
arr[j+1]=temp;
}
for(i=0;i<n;i++)
{
printf("%d ",arr[i]);
}
}
