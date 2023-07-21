#include <stdio.h>
int main()
{
    int a=8;
    int b=12;
    int gcd=1;
    for(int i=1;i<=a && i<=b;i++)
    {
        if (a%i==0 && b%i==0)
        {
            gcd=i;
        }
    }
    printf("The greatest common divisor : %d\n", gcd);

    return 0;
}
