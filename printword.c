#include <stdio.h>
int main()
{
char st[100];
int i,l;
printf("Enter a string: ");
gets(st);
l=strlen(st);
for(i=l-1;i>=0;i--)
{
if(st[i]==' ')
{
break;
}
}
for(i=i+1;i<l;i++)
{
printf("%c",st[i]);
}
}
