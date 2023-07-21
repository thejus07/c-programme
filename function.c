#include <stdio.h>
int sum(int c,int d)
{
    int temp=c+d;
    return temp;
}
int main()
{

    int a,b;
    printf("enter the value for a & b:");
    scanf("%d%d",&a,&b);
    printf("%d",sum(a,b));
}
