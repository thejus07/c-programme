#include <stdio.h>
int main()
{
int n;
scanf("%d",&n);
getchar();
while(n--)
{
char s[100];
scanf("%s", s);
int left=0,right=0,star=0;
for(int i=0;s[i];i++)
{
if(s[i]=='(')
left++;
else if(s[i]==')')
right++;
else
star++;
if(right>left+star)
{
printf("No\n");
break;
}
}
if(left==right||left+star==right)
printf("Yes\n");

}
return 0;
}
