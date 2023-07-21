#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter the element of array:");
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("entered array is:");
    for(int i=0;i<n;i++)
        printf("%d",arr[i]);
        int i=0,j=n-1;
        while(i<j)
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
        }
        printf("ther sorted array is:");
        for(int i=0;i<n;i++)
            printf("%d",arr[i]);
        return 0;

}
