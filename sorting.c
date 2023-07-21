#include<stdio.h>
int main()
{
    int i,j,n,k,temp;
    scanf("%d",&n);
    int a[n];
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    printf("%d",a[k]-1);
    return 0;
}
