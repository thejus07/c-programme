#include<stdio.h>
int main()
{
int arr[100],pos,val,size;
printf("Enter the size of the array: ");
scanf("%d",&size);
printf("Enter the elements of the array:\n");
for(int i=0;i<size;i++)
scanf("%d",&arr[i]);
printf("Enter the position to insert an element: ");
scanf("%d",&pos);
printf("Enter the value of the element: ");
scanf("%d",&val);
for(int i=size-1;i>=pos-1;i--)
arr[i+1]=arr[i];
arr[pos-1]=val;
size++;
printf("new array:\n");
for(int i=0;i<size;i++)
printf("%d ",arr[i]);
return 0;
}
