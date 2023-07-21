#include <stdio.h>

int main()
{
  char str[100];
  int i, j, k;
  int len = 0;
  printf("Enter a string: ");
  scanf("%[^\n]s",str);
  while (str[len]!= '\0')
  {
    len++;
  }
  for (i=0;i<len;i++)
  {
    for (j=0;j<i;j++)
    {
      if (str[i]==str[j])
      {
        break;
      }
    }
    if (j==i)
    {
      str[k++]=str[i];
    }
  }
  str[k]='\0';

  printf("output String: %s\n", str);

  return 0;
}
