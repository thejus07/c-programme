#include<stdio.h>
int main()
{
    int n,c1=0,c2=0;
    int i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&a[i]);
        c1+=a[i];

    }
    for(i=0;i<=n;i++)
    {
        c2 +=i;
    }
    printf("the missing value %d",c2-c1);
    return 0;

}
