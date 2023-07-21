#include<stdio.h>
int main()
{
    int i,n,j;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++)
    {
        scanf("%d",&b[j]);

    if(a[n]==b[n])
    {
        printf("array size are equal");
    }
    if(a[i]==b[j])
    {
        printf("array are equal");
    }
    }
}
