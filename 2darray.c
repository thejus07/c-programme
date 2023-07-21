#include<stdio.h>
int main()
{
    int a,b,i,j,max=0,x;
    scanf("%d %d",&a,&b);
    int arr[a][b];
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
     for(i=0;i<a;i++)
    {
        printf("\n");
        for(j=0;j<b;j++)
        {
            printf("%d\t",arr[i][j]);
        }
    }
    for(i=0;i<a;i++)
    {
        int count=0;
        for(j=0;j<b;j++)
        {
            if(arr[i][j]==1)
            {
                count++;
            }
        }
        if(count>max)
        {
          max=count;
          x=i;
        }
}
            printf("%d",x);
            return 0;
    }
