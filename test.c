#include <stdio.h>
#include <stdlib.h>

int maxCaughtThieves(char arr[], int n, int k) {
    int count = 0;
    int i, j;
    int numPolicemen = 0;
    int numThieves = 0;
    int* policemen = (int*) malloc(sizeof(int) * n);
    int* thieves = (int*) malloc(sizeof(int) * n);
    for (i = 0; i < n; i++) {
        if (arr[i] == 'P') {
            policemen[numPolicemen++] = i;
        } else {
            thieves[numThieves++] = i;
        }
    }
    i = j = 0;
    while (i < numPolicemen && j < numThieves) {
        if (abs(policemen[i] - thieves[j]) <= k) {
            count++;
            i++;
            j++;
        } else if (thieves[j] < policemen[i]) {
            j++;
        } else {
            i++;
        }
    }

    free(policemen);
    free(thieves);
    return count;
}

int main() {
    int o;
    scanf("%d",&o);
    char arr1[o];
    int k1 = 1;
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    printf("%d\n", maxCaughtThieves(arr1, n1, k1));

    char arr2[] = {'T', 'T', 'P', 'P', 'T', 'P'};
    int k2 = 2;
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("%d\n", maxCaughtThieves(arr2, n2, k2));

    char arr3[] = {'P', 'T', 'P', 'T', 'T', 'P'};
    int k3 = 3;
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    printf("%d\n", maxCaughtThieves(arr3, n3, k3));

    return 0;
}
