#include<stdio.h>
int main()
{
    int n,i,j,N,count=0,tot;
    scanf("%d",&n);
    int arr[n];
    N=n-2;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
   // N=N*arr[0];
   // printf("%d",N);
    for(i=1;i<=n-2;i++)
    {
        arr[i]=0;
        count++;
    }
            //printf("%d",count);
    if(arr[0]<arr[n-1])
    {
        tot=arr[0]*N;
        printf("%d",tot);
    }
    else
    {
         tot=arr[n-1]*N;
         printf("%d",tot);
    }

}
