#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%2==0)
    {
        n=n/2;
        printf("%d",n);
    }
    else
    {
        n=n/2+1;
        printf("%d",n);
    }
}
