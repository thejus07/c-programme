#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char a[100];
   // scanf("%s",a);
   gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c",a[i]);
        }
        printf("\n");

    }
    return 0;
}


