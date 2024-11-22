#include <stdio.h>

int main() {
    int T, N, i, even_count, odd_count;

    scanf("%d", &T);

    while (T--) {
        scanf("%d", &N);

        even_count = odd_count = 0;

        for (i = 1; i * i <= N; i++) {
            if (N % i == 0) {
                if (i % 2 == 0) {
                    even_count++;
                } else {
                    odd_count++;
                }

                if (i * i != N) {
                    if ((N / i) % 2 == 0) {
                        even_count++;
                    } else {
                        odd_count++;
                    }
                }
            }
        }

        if (even_count > odd_count) {
            printf("1\n");
        } else if (even_count == odd_count) {
            printf("0\n");
        } else {
            printf("-1\n");
        }
    }

    return 0;
}