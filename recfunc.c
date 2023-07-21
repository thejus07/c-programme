#include <stdio.h>
void Array(int arr[],int s,int ind)
{
if (ind==s)
    {
        return;
    }
    printf("%d ",arr[ind]);
    Array(arr,s,ind+1);
}

int main()
{
    int arr[]={2,1,4,3,6,5,8,7,10,11};
    int s= sizeof(arr)/sizeof(int);
    Array(arr,s,0);
    return 0;
}
