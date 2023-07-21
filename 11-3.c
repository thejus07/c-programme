#include <stdio.h>

int main() {
    int n, i, j = 0, k = 0;
    printf("Enter size = ");
    scanf("%d", &n);
    int arr[n], odd[n], even[n], ordered[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even[j++] = arr[i];
        }
        else {
            odd[k++] = arr[i];
        }
    }

    for (i = 0; i < k; i++) {
        ordered[i] = odd[i];
    }
    for (i = 0; i < j; i++) {
        ordered[k+i] = even[i];
    }

    for (i = 0; i < n; i++) {
        printf("%d ", ordered[i]);
    }

    return 0;
}
