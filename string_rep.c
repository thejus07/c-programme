#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],a1;
    int count=0,i;
    gets(a);
    scanf("%c",&a1);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==a1)
        {
            count++;
        }
    }
    printf("%d",count);
}
