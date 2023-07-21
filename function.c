#include<stdio.h>
int sum(int a, int b)
{
int sum=a+b;
return sum;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",sum(a,b));
}
