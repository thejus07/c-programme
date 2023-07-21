#include<stdio.h>
int main()
{
   int c,n,x,arr[10];
   printf("Enter number of elements:\n");
   scanf("%d",&n);
   printf("Enter %d integers:\n", n);
   for (c=0;c<n;c++)
      scanf("%d",&arr[c]);
   printf("Enter the value to find:\n");
   scanf("%d", &x);
   int first=0,last=n-1,mid;
   while(first<=last)
    {
    mid=(first+last)/2;

    if(arr[mid]==x)
        {
        printf("%d found at index %d", x, mid);
        break;
    }

    if(arr[mid]<x)
        first=mid+1;

    else
        last=mid-1;
}

if (first>last)
    printf("%d not found in the array", x);

return 0;
}






