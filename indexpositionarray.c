#include<stdio.h>
int main()
{
  int n,i,j,k=0;
  printf("Enter array size: ");
  scanf("%d",&n);
  int a[n],b[n];
  printf("\nEnter the array elements: ");
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      if(i==a[j])
      {
        b[k]=a[j];
        k++;
        break;
      }
      else if(j==n-1)
      {
          b[k]=-1;
          k++;
      }
    }
  }
  printf("\nfinal array: ");
    for(i=0;i<n;i++)
  {
      printf("%d ",b[i]);
  }
}

