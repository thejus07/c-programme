#include<stdio.h>
void arm(int a)
{
    int res=0,rem=0;
    int c2=a;
    while(a--)
    {
        rem=a%10;
        res=res+rem*rem*rem;
        a=a/10;
    }
    if(c2==res)
        printf("armstrong\n");
    else
        printf("not armstrong\n");
}
int main()
{
    int a,res1=0,rem1=0;
    scanf("%d",&a);
    int c1=a;
    arm(a);
    while(a)
    {
        rem1=a%10;
        res1=res1*10+rem1;
        a=a/10;
    }
    if(c1==res1)
        printf("palindrome\n");
    else
        printf("not palindrome\n");
}
