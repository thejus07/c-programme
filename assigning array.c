#include <stdio.h>
int main()
{
    int i,n,arr[100],brr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        brr[i]= arr[i];
        printf("%d",brr[i]);
    }
}

