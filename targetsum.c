#include<stdio.h>
int main()
{
    int a[]={5,7,1,2,8,4,3};
    int i,j,n,k,target;
    n=sizeof (a)/sizeof (a[0]);
    scanf("%d",&target);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==target)
            {
                printf("%d %d\t",a[i],a[j]);
                k=1;
            }

        }
    }
            if(k!=1)
            {
                printf("no 2 values sum up to 19");
            }
}
