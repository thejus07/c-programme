#include<stdio.h>
int main()
{
    char str[100];
    int i=0,count=0,count1=0,len;
    gets(str);
    //len=strlen(str);
   while(str[i]!='\0')
    {
        if(str[i]!=' ')
            count++;
        else
            count=0;
        i++;
    }
    i=0;
    while(str[i]!='\0')
    {
        count1++;
        i++;
    }
    printf("%d",count1);
    for(i=count1-count;i<count1;i++)
    {
        printf("%c",str[i]);
    }
    printf("the length of the last word is %d",count);
}
