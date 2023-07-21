//check whether given number is equal if we add and mult the digits
//123-numbers are equal
//124-numbers are not equal
#include <stdio.h>
int main()
    {
        int i,n,sum=0,mult=1,rem;
        scanf("%d",&n);
        while(n!=0)
        {
            rem=n%10;
            n=n/10;
            sum=sum+rem;;
            mult=mult*rem;
        }
        if(sum==mult)
        {
            printf("NUMBERS ARE EQUAL");
        }
        else
        {
            printf("NUMBERS ARE NOT EQUAL");
        }
    }
