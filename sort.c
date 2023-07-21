#include<stdio.h>
int main()
{
    int a,b,i,j;
    scanf("%d %d",&a,&b);
    int m=a+b;
    int a1[a],a2[b];
    for(i=0;i<a;i++)
    {
        scanf("%d",&a1[i]);
    }
    for(i=0;i<b;i++)
    {
        scanf("%d",&a2[i]);
    }
    for(i=a;i<m;i++)
    {
        a[i]=b[i];
        j++;
    }
    for(i=0;i<m;i++)
    {
        printf("%d",a[i]);
    }
}
