#include <stdio.h>
int main()
{
    int i,j,n;
    char sentence[50];
    int l1;
    printf("sentence: ");
    gets(sentence);
    printf("\n Enter value of n : ");
    scanf("%d",&n);
    l1=strlen(sentence);
    for(i=n/2;i<=n;i+=2)
    {
        for(j=1;j<n-i;j+=2)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }

        printf("\n");
    }
    for(i=n;i>=1;i--)
    {
        for(j=i;j<n;j++)
        {
            printf(" ");
        }
        if(i==n)
        {
            for(j=1;j<=(n*2-l1)/2;j++)
            {
                printf("*");
            }
            printf("%s",sentence);
            for(j=1;j<(n*2-l1)/2;j++)
            {
                printf("*");
            }
        }
        else
        {
            for(j=1;j<=(i*2)-1;j++)
            {
                printf("*");
            }
        }

        printf("\n");
    }

    return 0;
}
