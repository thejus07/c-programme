#include <stdio.h>
#include <string.h>

int main() {
  char player1[100], player2[100];
  int count, i, j, len1, len2;
  int flames[] = {1, 1, 1, 1, 1, 1};
  char *relation[] = {"Friends", "Love", "Affection", "Marriage", "Enemy", "Sibling"};

  printf("Enter the first name: ");
  fgets(player1, 100, stdin);
  printf("Enter the second name: ");
  fgets(player2, 100, stdin);

  len1 = strlen(player1) - 1;
  len2 = strlen(player2) - 1;

  for (i = 0; i < len1; i++) {
    for (j = 0; j < len2; j++) {
      if (player1[i] == player2[j]) {
        player2[j] = ' ';
        count++;
        break;
      }
    }
  }

  for (i = 0; i < 6; i++) {
    for (j = 0; j < count; j++) {
      if (flames[i] == 1) {
        flames[i] = 0;
        count--;
        break;
      }
    }
  }

  printf(relation[flames[count]]);

  return 0;
}
