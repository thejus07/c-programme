#include <stdio.h>
int main()
{
    char s[100],goal[100];
    scanf("%s %s",s,goal);
    int count=0,i1=-1,j=-1;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]!=goal[i])
        {
            count++;
            if (count>2)
            {
                printf("false\n");
                return 0;
                }
            if (i1==-1)
            {
                i1=i;
            }
            else
            {
                j=i;
            }
        }
    }
    if(count==2 && s[i1]==goal[j] && s[j]==goal[i1])
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }
}



