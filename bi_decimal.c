#include<stdio.h>
int main()
{
    long int n;
    scanf("%ld",&n);
    int dec=0,i=0,rem;
    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        dec+=rem*pow(2,i);
        i++;
    }
    printf("%d",dec);
}
