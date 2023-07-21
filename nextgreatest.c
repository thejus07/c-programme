#include <stdio.h>

int main()
{
    int n;
    printf("size of the array: ");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++)
        {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    for (int i=0;i<n;i++)
    {
        int max = -1;
        for (int j=i+1;j<n;j++)
        {
            if (arr[j]>arr[i] && (max==-1 || arr[j]<max))
            {
                max = arr[j];
            }
        }
        printf("%d ", max);
    }

    return 0;
}
