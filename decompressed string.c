#include <stdio.h>

int main() {
    char n;
    scanf("%d",%a);
    char n[] = a;
    char output[10];
    int i, j = 0;

    for (i = 0;n[i] != '\0'; i++)
    {
        if (input[i] >= 'a' && input[i] <= 'z')
            {
                int k, count = input[i+1] - '0';
                for (k = 0; k < count; k++) {
                    output[j++] = input[i];
            }
        }
    }

    output[j] = '\0';
    printf("%s", output);

    return 0;
}
