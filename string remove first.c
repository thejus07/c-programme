#include <stdio.h>
#include <string.h>

void removeFirst(char * s1, const char * s2)
{
    int i, j;
    int n1, n2;
    int found = 0;

    n1 = strlen(s1);
    n2 = strlen(s2);

    for(i=0; i<n1; i++)
    {
        found = 1;
        for(j=0; j<n2; j++)
        {
            if(s1[i+j] != s2[j])
            {
                found = 0;
                break;
            }
        }
        if(found == 1)
        {
            for(j=i; j<=n1-n2; j++)
            {
                s1[j] = s1[j + n2];
            }
            break;
        }
    }
}

int main()
{
    char s1[100];
    char s2[100];
    printf("Enter any string: ");
    gets(s1);
    printf("Enter string to be removed: ");
    gets(s2);

    removeFirst(s1, s2);

    printf("\nString after removing '%s': \n%s", s2, s1);

    return 0;
}



