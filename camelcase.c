#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char a[50];
    gets(a);
    for(i=0;i<strlen(a);i++)
    {
        if(i==0)
        {
            a[i]=toupper(a[i]);
        }
        if(a[i]==' ')
        {
            a[i+1]=toupper(a[i+1]);
        }
    }
    puts(a);

}
