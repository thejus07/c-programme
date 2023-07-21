#include <stdio.h>
void place(int N)
{
    int K,D;
    int md=N-1;
    for (D=0;D<=md;D++)
    {
        int R=N-D*D;
        int t=R;
        for (K=1;K*K<=t;K++)
        {
            if (K*K==t)
            {
                printf("yes \n");
                printf("K=%d,D =%d",K,D);
                return;
            }
        }
    }

    printf("No\n");
}

int main()
{
    int N;
    printf("Enter N: ");
    scanf("%d",&N);
    place(N);
    return 0;
}
