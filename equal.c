# include<stdio.h>
int main()
{
    int i,j,n,m,temp1,temp2;
    printf("size of array 1 ");
    scanf("%d",&n);
    printf("size of array 2 ");
    scanf("%d",&m);
    int a[n],b[m];
    printf("array 1 \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("array 2 \n");
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
      for(i=0;i<n;i++)
    {
        for(j=i+1;j<m;j++)
        {
            if(a[i]>a[j])
            {
            temp1=a[i];
            a[i]=a[j];
            a[j]=temp1;
            }

        }
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<m;j++)
        {
            if(b[i]>b[j])
            {
            temp1=b[i];
            b[i]=b[j];
            b[j]=temp1;
            }

        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
    {
        if(a[i]==b[i])
        {
            printf("The given 2 arrays are equal");
        }
        else{
            printf("The given 2 arrays are not equal");
        }
    }
    }
}

