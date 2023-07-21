#include<stdio.h>
int main()
{
    int n,m,i,r,sum=0,sum1=0;
    scanf("%d %d %d ",&n,&m,&r);
    int ic[n],og[m];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ic[i]);
        sum=sum+ic[i];
    }
        for(i=0;i<m;i++)
    {
        scanf("%d",&og[i]);
        sum1=sum1+og[i];
    }
    if(sum==sum1)
    {
        printf("balanced");
    }
    else if(sum<sum1)
    {
        printf("%d",(sum-sum1)+r);
    }
    else
    {
        printf("%d",(sum1-sum)-r);
    }
    printf("%d %d",sum,sum1);



}
