#include<stdio.h>
int main()
{
    int t,a,b,c,d;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d %d",&a,&b,&c,&d);

        if(a>b)
        {
                 a=a+c-d;
                printf("no");
        }
        else if(a==b)
        {
            printf("YES");
        }

    }
}
