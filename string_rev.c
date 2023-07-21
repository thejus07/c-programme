#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int i,j,count=0;
char s[100],goal[100],temp;
gets(s);
gets(goal);
//count++;
for(i=0;s[i]!='\0';i++)
{

    for(j=i+1;s[j]!='\0';j++)
{
    temp=s[i];
    s[i]=s[j];
    s[j]=temp;
     count++;
}
}
if(strcmp(s,goal)==0)
{
    printf("true");
}
else{
    printf("false");
}
printf("\n%d",count);
}




