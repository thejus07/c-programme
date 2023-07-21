#include<stdio.h>
int main()
{
  int arr[100], n, i;
  int m;
  printf("Enter the number of elements: ");
  scanf("%d",&n);
  printf("Enter elements in the array: \n");
  for (i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
  }
  m=arr[0];
  for(i=1;i<n;i++)
  {
    if(arr[i]>m) {
      m=arr[i];
    }
  }
  printf("The largest element in the array is %d\n", m);

  return 0;
}
