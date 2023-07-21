#include<stdio.h>
int Peak(int arr[], int n)
{
    int i;
    if(n == 1)
    {
        return 0;
    }
    if(arr[0] >= arr[1])
    {
        return 0;
    }
    if(arr[n - 1] >= arr[n - 2])
    {
        return n - 1;
    }
    for(i = 1; i < n - 1; i++)
    {
        if(arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1])
        {
            return i;
        }
    }
}
int main()
{
    int size, i, array [size];
    printf("Enter size of the array: ");
    scanf("%d", &size);
    printf("Enter the elements: ");
    for(i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("The first Peak element: %d", Peak(array, size));
}
