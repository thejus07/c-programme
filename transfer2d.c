#include<stdio.h>
int main()
{
    int n,i,j,k,mul[10][10],b[10][10];
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            b[i][j]=a[i][j];
        }
    }
     for(i=0;i<n;i++,printf("\n"))
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[j][i]);
        }
    }
     for(i=0;i<n;i++,printf("\n"))
    {
        for(j=0;j<n;j++)
        {

            mul[i][j]=0;
        for(k=0;k<n;k++)
        {
          mul[i][j]+=a[i][k]*b[k][j];
          printf("%d",mul[i][j]);
        }
       }
    }

}

