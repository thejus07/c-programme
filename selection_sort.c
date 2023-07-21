#include<stdio.h>
int main()
{
    int i,j,n,small,temp;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
        for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
     for(i=0;i<n-1;i++)
     {
             small=i;
          for(j=i+1;j<n;j++)
          {
              if(a[j]>a[small])
              {
                 small=j;
              }
          }
                  temp=a[small];
                  a[small]=a[i];
                  a[i]=temp;
     }
      for(i=0;i<n;i++)
      {
        printf("%d ",a[i]);
      }
      return 0;
}
