#include <stdio.h>

int main()
{
    int bills[100], n;
    scanf("%d",&n);
    for (int i=0;i<n;i++)
        {
        scanf("%d",&bills[i]);
    }
    int five= 0,ten=0;
    for (int i=0;i<n;i++)
    {
        if (bills[i]==5)
        {
            five++;
        } else if (bills[i]==10)
        {
            if (five==0)
            {
                printf("false\n");
                return 0;
            }
            five--;
            ten++;
        }
    else if (bills[i]==20)
        {
            if (ten > 0 && five > 0) {
                ten--;
                five--;
            } else if (five>= 3) {
                five-= 3;
            } else {
                printf("false\n");
                return 0;
            }
        }
    }
    printf("true\n");
    return 0;
}
