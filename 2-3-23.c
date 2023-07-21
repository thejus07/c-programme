#include <stdio.h>
int sum(int a,int b)
{
    int sum;
    sum = a+b;
    return sum;
}
int main()
{
    int a,b,c=0;
    scanf("%d%d",&a,&b);
    printf("%d",sum(a,b));
}
