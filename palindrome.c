#include<stdio.h>
void armstrong(int num);
void armstrong(int num)
{
    scanf("%d",num);
    int rem = num%10;
    int sum = (sum*10)+rem;
    num = num/10;
    if(num==sum)
    {
        printf("NUMBER IS ARMSTRONG");
    }
    else{
        printf("NUMBER IS NOT AN AMSTRONG");
    }
}
int main()
{
    void palindrome(int n);
    int n,rev=0,rem,org;
    org = n;
    while(n!=0)
    {
        scanf("%d",&n);
        rem = n%10;
        rev = rev*10+rem;
        n=n/10;
        if(org== rem)
        {
            printf("NUMBER IS PALINDROME");
        }
        else
            {
            printf("NUMBER IS NOT A PALINDROME");
        }
    }
}
