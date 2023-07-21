#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int i,j,l,count=0,temp;
     gets(a);
     l=strlen(a);
    for(i=0;i<l-1;i++)
    {
        for(j=0;j<l-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    puts(a);
    return 0;

}

