#include<stdio.h>
int main()
{
    int n1,n2,n3,n4,n5,n6,ver1,ver2;
    printf("version1: ");
    scanf("%d %d %d",&n1,&n2,&n3);
    printf("version2: ");
    scanf("%d %d %d",&n4,&n5,&n6);
    /*if(n1>n4 && n2>n5 && n3>n6)
    {
        printf("version2 < version1");
    }
    else if(n1==n4 && n2==n5 && n3==n6)
    {
        printf("version2 == version1");
    }
    else
    {
        printf("version2 > version1");
    }*/
    ver1=n1+n2+n3;
    ver2=n4+n5+n6;
    if(ver1>ver2)
    {
         printf("version2 < version1");
    }
    else if(ver1==ver2)
    {
         printf("version2 == version1");
    }
    else
    {
        printf("version2 > version1");
    }
}
