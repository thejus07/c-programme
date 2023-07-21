#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int res,res1,s1,t1;
    char s[100],t[100];
    //gets(s);
   // gets(t);
    scanf("%s",s);
    scanf("%s",t);
    res=strcmp(s,t);
    if(res==0)
    {
        printf("0");
    }
    else
    {
        s1=strlen(s);
        t1=strlen(t);
        res1=s1-t1;
    printf("%d",abs(res1));
}
}
