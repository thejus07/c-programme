#include <stdio.h>

int main() {
   char name[20];
   printf("Enter your name: ");
   scanf("%s", name);

   for (int i = 1; i <= 6; i++) {
      for (int j = 1; j <= 7; j++) {
         if (i == 1 && (j == 2 || j == 6))
            printf(" ");
         else if (i == 2 && (j == 1 || j == 7))
            printf(" ");
         else if ((i == 3 || i == 4) && (j == 1 || j == 7))
            printf(" ");
         else if (i == 5 && (j == 1 || j == 2 || j == 6 || j == 7))
            printf(" ");
         else
            printf("%c", name[(i+j)%strlen(name)]);
      }
      printf("\n");
   }

   return 0;
}
