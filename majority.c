#include<stdio.h>
int main()
{
int x,i,j,n,count=0,p;
scanf("%d",&n);
x=n/2;
int a[n];
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count=count+1;
            }
        }
            if(count>x)
            {
                printf("%d",a[i]);
                break;
            }
    }
return 0;
}
