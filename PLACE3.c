#include <stdio.h>

int PS(int num) {
    int i;
    for (i = 1; i * i <= num; i++) {
        if (i * i == num) {
            return 1;
        }
    }
    return 0;
}

void conv(int N) {
    int d, K;
    int maxD = N - 1;

    for (d = 0; d <= maxD; d++) {
        int KK = N - d * d;

        if (KK < 0) {
            printf("No\n");
            return;
        }

        if (PS(KK)) {
            K = 0;
            int t = KK;
            while (t > 0) {
                t /= 10;
                K++;
            }
            printf("Yes\n");
            printf("K = %d, D = %d\n", K, d);
            return;
        }
    }

    printf("No\n");
}

int main() {
    int N;
    printf("Enter N: ");
    scanf("%d", &N);
    conv(N);
    return 0;
}
