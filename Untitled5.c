#include<stdio.h>
int add(int ,int);
int mult(int,int);
int main()
{
  int a=20,b=30,c=3,d=6,sum,multt;
  sum=add(a,b);
  multt=mult(c,d);
  printf("sum is  %d",sum);
  printf("\n");
  printf("mult is %d",multt);
}
int add( a,b)
{
    return(a+b);
}
int mult(c,d)

{

    return(c*d);
}
