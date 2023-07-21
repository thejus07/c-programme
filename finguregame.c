#include<stdio.h>
int main()
{
    int n,rem;
    scanf("%d",&n);
    rem=n%8;
    if(rem<=5)
    {
        rem=rem;
    }
    else if(rem>5)
    {
        rem=10-rem;
    }
    else if(rem==0)
    {
        rem=2;
    }
    switch(rem)
    {
    case 1:printf("thumb");
    break;
    case 2:printf("index");
    break;
    case 3:printf("middle");
    break;
    case 4:printf("ring");
    break;
    case 5:printf("little");
    break;
    }
}
