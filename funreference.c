#include<stdio.h>
int mup(int *c,int *d)
{
    *c *=2;
}

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int *c=&a;
    int *d=&b;
     printf("%d %d\n",*c,*d);
      printf("%d %d\n",c,d);
    mup(c,d);
    printf("%d %d\n",*c,*d);
}
