#include<stdio.h>
int main()
{
    int t,i,j,c;
    scanf("%d",&t);
    while(t--)
    {
        char a[100];
        c=0;
        scanf("%s",a);
        for(i=0;a[i]!='\0';i++)
        {
            if(a[i]=='B')
            {
                for(j=1;j<=2;j++)
                {
                    if(a[i+j]=='W')
                    {
                        c++;
                        a[i+j]='b';

                    }
                    if(a[i-j]=='W')
                    {
                        c++;
                        a[i-j]='b';
                    }
                }
            }
        }
        printf("%d\n",c);
    }
    return 0;
}
