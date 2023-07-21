#include<stdio.h>
int main()
    {
        int i,size,sum=0,sum1=0,arr[100];
        scanf("%d",&size);
        for(i=0;i<size;i++)
            {
                scanf("%d",&arr[i]);
            }
        for(i=0;i<size;i++)
            {
                if(arr[i]%2==0)
                    {
                        sum=sum+arr[i];
                    }
                else
                    {
                        sum1=sum1+arr[i];
                    }
            }
         printf("odd:%d\n",sum1);
         printf("even:%d",sum);

    }
