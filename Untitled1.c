#include <stdio.h>
#include <string.h>

void remove_character(char *str, int index) {
    int i;
    for (i = index; i < strlen(str); i++) {
        str[i] = str[i+1];
    }
}

int main() {
    char name1[100], name2[100];
    int i, j, length1, length2, count, index;

    printf("                      F L A M E S \n\n");
    printf("Enter your name: ");
    scanf("%s", name1);
    printf("Enter your partner's name: ");
    scanf("%s", name2);

    length1 = strlen(name1);
    length2 = strlen(name2);

    // Count number of characters in the names that are not in common
    count = length1 + length2;
    for (i = 0; i < length1; i++) {
        for (j = 0; j < length2; j++) {
            if (name1[i] == name2[j]) {
                count -= 2;
                remove_character(name1, i);
                remove_character(name2, j);
                length1--;
                length2--;
                i--;
                break;
            }
        }
    }

    // Calculate the result using the FLAMES algorithm
    char flames[] = "FLAMES";
    int flames_length = strlen(flames);
    index = 0;
    for (i = 1; i < flames_length; i++) {
        index = (index + count - 1) % (flames_length - i);
        for (j = index; j < flames_length - i; j++) {
            flames[j] = flames[j+1];
        }
    }

    // Print the result
    switch(flames[0]) {
        case 'F':
            printf("You and your partner are friends.\n");
            break;
        case 'L':
            printf("You and your partner are in love.\n");
            break;
        case 'A':
            printf("You and your partner have an affectionate relationship.\n");
            break;
        case 'M':
            printf("You and your partner are going to get married.\n");
            break;
        case 'E':
            printf("You and your partner are enemies.\n");
            break;
        case 'S':
            printf("You and your partner are lovers.\n");
            break;
    }

    return 0;
}
