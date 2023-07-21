#include<stdio.h>

int main()
{
        int a[10],b[10],c[10],i,j,n,m,temp;
        printf("enter the no of element array1\n");
        scanf("%d",&n);
        printf("enter array elements\n");
        for(i=0;i<n;i++)
            {
                scanf("%d",&a[i]);
            }
            printf("enter size of 2nd array");
            scanf("%d",&m);
            printf("enter no of elements in 2nd array \n");
            for(i=0;i<n;i++)
                {
                    scanf("%d",&b[i]);
                }
                for(i=0;i<n;i++)
                {
                    c[i]=a[i];
                }
                j=0;
                for(i=n;i<n+m;i++)
                    {
                        c[i]=b[j];
                j++;
                 }
                 for(i=0;i<n+m;i++)
                    {
                        printf("%d\n",c[i]);
                    }
                    for(j=0;j<n-i-1;j++)
                        {
                            if(c[j]>c[j+1])
                            {
                                temp=c[j];
                                c[j]=c[j+1];
                                c[j+1]=temp;
                            }
                        }
                        for(j=0;j<n+m;j++)
                            {
                                printf("sorted is %d\n",c[j]);
                            }
                            for(i=0;i<n+m;i++)
                            {

                            if(c[i]==c[i+1])
                                {
                                    temp=c[i];


                                    printf("%d",c[i]);
                                }
                            }
                                return 0;





}
