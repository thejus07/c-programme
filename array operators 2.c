#include <stdio.h>
int sub(int ,int);
int mul(int ,int);
int div(int ,int);
int mod(int ,int);
int main()
{

    char ch;
    int a , b ;
    while(1)
    {

        printf("\n Enter an operator(+,-,*,/%), if want to exit pressx:");
        scanf("%c",&ch);
        if(ch == 'x')
            exit(0);
        printf("\n Enter the first and second operator:");
        scanf("%d %d",&a,&b);
        switch(ch)
        {
            int ans;
            case '+';
            ans=add(a, b);
            printf("addition is %d",ans);
            break;
            case '+';
            ans=sub(a, b);
            break;
            case '+';
            ans=add(a, b);
            break;
            case '+';
            ans=add(a, b);
            break;
            case '+';
            ans=add(a, b);
            break;
            case '+';
            ans=add(a, b);
            break;

                    }
    }
}
