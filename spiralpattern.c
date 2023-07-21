#include<stdio.h>
int main()
{
int num,rmax,rmin=1,cmax,cmin=1,i,j;
scanf("%d",&num);
int a[num][num];
rmax=num;cmax=num;
int count=1;
while(rmin<=rmax)
    {
        for(i=cmin;i<=cmax;i++)
        {
            a[rmin][i]=count++;
            }
            for(i=rmin+1;i<=rmax;i++)
                {
                    a[i][cmax]=count++;
            }
            for(i=cmax-1;i>=cmin;i--)
                {
                    a[rmax][i]=count++;
            }
            for(i=rmax-1;i>=rmin+1;i--)
            {
                a[i][cmin]=count++;
            }
            rmin++;
            rmax--;
            cmin++;
            cmax--;
            }
            for(i=1;i<=num;i++)
            {
                for(j=1;j<=num;j++)
                {
                    printf("%d \t",a[i][j]);
                }
                printf("\n");
            }

}
