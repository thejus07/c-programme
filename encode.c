#include <stdio.h>
int main()
{
    char arr[] = "aaaabbbccdefaa";
    char alpha[100];
    int num[100];
    int i,j=0,c=1;
    char pre=arr[0];
    for (i=1;arr[i]!='\0';i++)
        {
        if(arr[i]==pre)
        {
            c++;
        } else
        {
            alpha[j]=pre;
            num[j]=c;
            j++;
            c=1;
            pre=arr[i];
        }
    }
    alpha[j]=pre;
    num[j]=c;
    j++;
    i = 0;
    while(alpha[i]!='\0')
        {
        printf("%c%d",alpha[i],num[i]);
        i++;
    }
}


