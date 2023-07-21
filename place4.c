#include<stdio.h>
int p(int a)
{
    int res=1;
    for(int i=1;i<=a;i++)
    {
       res=res*a;
    }
    return res;
}
int calculate(int n)
{
    int k,i,j;
    int temp;
    for(i=1;i<n/2;i++)
    {
       k=p(i);
       for(j=1;j<n/2;j++)
       {
          temp=n-(j*j);
          if(temp==k)
          {
              printf("\nk is:%d",i);
              printf("\nd is:%d",j);
              printf("\nYES");
              return 0;
          }
       }
    }
    printf("NO");
    return 0;
}
int main()
{
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    calculate(n);

}
