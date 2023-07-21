#include<stdio.h>
#include<stdlib.h>
struct noah
{
int a;
struct noah *b
}
*c,*d,*e;
int main ()
{
int n,i,cnt=0;
printf("enter the size: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
e=(struct noah *)malloc(sizeof(struct noah));
scanf("%d",&e->a);
e->b=NULL;
if(c==NULL)
{
c=e;
d=e;
}
else
{
d->b=e;
d=e;
}
}
d=c;
while(d!=NULL)
{
    printf("%d ",d->a);
    d=d->b;
}
}


