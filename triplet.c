#include<stdio.h>
int main()
{
    int i,j,n,k,len=0,size=0,count=0,sum;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            sum=arr[i]+arr[j];
            for(k=0;k<n;k++)
            {
                if(arr[k]==sum)
                {
                    count++;
                }
            }
        }
    }
    printf("%d",count);
    return 0;
}
