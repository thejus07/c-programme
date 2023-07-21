#include <stdio.h>
int main()
{
    int arr[100],n,i,s;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    s= arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]< s)
        {
            s=arr[i];
        }
    }

    printf("The smallest element in the array is: %d",s);

    return 0;
}
