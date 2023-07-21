#include <stdio.h>
int main()
{
    int a[100],b[100],i,j,n,m,count;
    scanf("%d",&n);
    scanf("%d",&m);
    for (i=0;i<n;i++)
    {
           scanf("%d",&a[i]);
    }
    for (j=0;j<m;j++)
    {
        scanf("%d",&j);
    }
           if(m==n)
           {
                for (i=0;j<m;j++)
                {

                     for (j=0;j<n;j++)
                     {

                         if (a[i]==b[j])
                         {
                             count++;
                             break;
                         }
                     }
                }
            }
            else
                {
                    printf("Arrays are not equal");
                }
            if((count==n)&&(count==m)))
            {
                printf("Wether arrays same");
            }
            else
            {
                printf("Wether arrays not same");
            }
            return 0;

}


