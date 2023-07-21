#include <stdio.h>
int main()
{
    char name1[100], name2[100];
    int i, j, a, b, count;
    printf("                 FLAMES\n\n");
    printf("Enter the first name: ");
    scanf("%s", name1);
    printf("Enter the second name: ");
    scanf("%s", name2);
    a = strlen(name1);
    b = strlen(name2);
    for(i=0; i<a; i++)
        {
            for(j=0;j<b;j++)
            {
                if(name1[i]==name2[j])
                {
                    name1[i]=' ';
                    name2[j]=' ';
                }
            }
        }
    count=0;
    for(i=0;i<a;i++)
        {
            if(name1[i]!=' ')
            count++;
        }
    for(i=0;i<b;i++)
        {
            if(name2[i]!=' ')
            count++;
        }
    char flames[]="FLAMES";

    while(strlen(flames)!=1)
        {
            for(i=1;i<count;i++)
            {
                flames[i-1]=flames[i];
            }
            flames[i-1]=flames[0];
            flames[strlen(flames)-1]='\0';
        }
    switch(flames[0])
    {
        case 'F':
            printf("Friends\n");
            break;
        case 'L':
            printf("Love\n");
            break;
        case 'A':
            printf("Affection\n");
            break;
        case 'M':
            printf("Marriage\n");
            break;
        case 'E':
            printf("Enmity\n");
            break;
        case 'S':
            printf("Sibling\n");
            break;
            }
    return 0;
}
