#include<stdio.h>
void call(int n,int m)
{
    printf("%d ",n);
    if(n!=m)
    {
        n++;
        call(n,m);
    }
}
int main()
{
  int n,m;
  scanf("%d %d",&n,&m);
  call(n,m);
}
