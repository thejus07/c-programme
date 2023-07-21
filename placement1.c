#include <stdio.h>
#include<math.h>
int place(int s)
{
    int d;
    for (d=1;d*d<=s;d++)
    {
        int r=s-d*d;
        int sqrt_r=sqrt(r);
        if(sqrt_r*sqrt_r==r);
        return 1;
    }
    return 0;
}
int main()
{
    int s;
    printf("enter value:");
    scanf("%d",&s);
    if (place(s))
        printf("yes");
    else
        printf("no");

    return 0;
}

