#include<stdio.h>
int main()
{
int a;
scanf("%d",&a);
    int res=0,rem;
    int c2=a;
    while(c2--)
    {
        rem=c2%10;
        res=res+rem*rem*rem;
        c2/=10;
    }
    if(res==a)
        printf("armstrong\n");
    else
        printf("not armstrong\n");
}
