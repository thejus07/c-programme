# include<stdio.h>
int main()
{
    int i,j,n,m,temp;
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
    j=0;
    for(i=n;i<n+m;i++)
    {
        a[i]=b[j];
        j++;
    }
    for(i=0;i<n+m;i++)
    {
        for(j=0;j<n+m;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }

        }
    }
    for(i=0;i<n+m;i++)
    {
        for(j=i+1;j<n+m;j++)
        {
            if(a[i]==a[j])
            {
                a[j]=0;
            }
        }
    }
    for(i=0;i<n+m;i++)
    {
        if(a[i]!=0)
        {
            printf("%d ",a[i]);
        }
    }
}
