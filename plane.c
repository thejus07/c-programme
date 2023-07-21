#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    int start[t],dur[t],pr[t];
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d",&start[i],&dur[i],&pr[i]);
    }
     for(i=0;i<t;i++)
    {
        printf("%d\n",pr[i]);
    }
}
