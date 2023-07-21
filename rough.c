#include<stdio.h>
int main()
{
   int c,n,x,arr[10];
   printf("Enter number of elements:\n");
   scanf("%d",&n);
   printf("Enter %d integers:\n", n);
   for (c = 0; c < n; c++)
      scanf("%d",&arr[c]);
   printf("Enter the value to find:\n");
   scanf("%d", &x);
   int low = 0, high = n - 1, mid;
   while (low <= high) {
    mid = (low + high) / 2;

    if (arr[mid] == x) {
        printf("%d found at index %d", x, mid);
        break;
    }

    if (arr[mid] < x)
        low = mid + 1;

    else
        high = mid - 1;
}

if (low > high)
    printf("%d not found in the array", x);

return 0;
}






