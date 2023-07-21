#include <stdio.h>
#include <string.h>

void remove_common_chars(char name1[], char name2[])
{
    int i,m= strlen(name1), len2 = strlen(name2);
    for(i = 0; i < m; i++) {
        for(int j = 0; j < len2; j++) {
            if(name1[i] == name2[j]) {
                name1[i] = name2[j] = ' ';
                break;
            }
        }
    }
}

int count_remaining_chars(char name[]) {
    int count = 0, len = strlen(name);
    for(int i = 0; i < len; i++) {
        if(name[i] != ' ') {
            count++;
        }
    }
    return count;
}

char get_result(int count) {
    char flames[] = "FLAMES";
    while(strlen(flames) > 1) {
        int index = count % strlen(flames);
        if(index == 0) {
            index = strlen(flames);
        }
        memmove(&flames[index - 1], &flames[index], strlen(flames) - index + 1);
        flames[strlen(flames) - 1] = '\0';
    }
    return flames[0];
}

int main() {
    char name1[50], name2[50];
    printf("Enter the first name: ");
    scanf("%s", name1);
    printf("Enter the second name: ");
    scanf("%s", name2);

    remove_common_chars(name1, name2);

    int count = count_remaining_chars(name1) + count_remaining_chars(name2);

    char result = get_result(count);

    switch(result) {
        case 'F': printf("You are friends.\n");
                  break;
        case 'L': printf("You are lovers.\n");
                  break;
        case 'A': printf("You have affection for each
