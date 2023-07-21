#include<stdio.h>
int main()
{
    int n,h=0,a=0,c=0,e=0,r=0,t=0,k=0,count=0,i;
    scanf("%d",&n);
    char b[n];
    scanf("%s",b);
    for(i=0;i<n;i++)
    {
        if(b[i]=='h')
            h++;
        else if(b[i]=='a')
            a++;
        else if(b[i]=='c')
            c++;
        else if(b[i]=='e')
            e++;
        else if(b[i]=='r')
            r++;
        else if(b[i]=='t')
            t++;
        else if(b[i]=='k')
            k++;
    }
    while(h>=2 && a>=2 && c>=1 && k>=1 && e>=2 && r>=2 && t>=1)
    {
        h-=2;
        a-=2;
        c-=1;
        k-=1;
        e-=2;
        r-=2;
        t-=1;
        count++;
    }
    printf("%d",count);
    return 0;
}
