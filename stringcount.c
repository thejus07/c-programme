#include <stdio.h>
int main()
{
    char da[100];
    char co;
    scanf("%s %c",&da,&co);
    int c=0;
    int i=0;
    while(da[i]!='\0')
    {
        if(da[i]==co)
        {
            c++;
        }
        i++;
    }

    printf("%d\n",c);
}

