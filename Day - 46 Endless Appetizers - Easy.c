#include <stdio.h>

int main() {
    int T, X, Y, R;

    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        scanf("%d %d %d", &X, &Y, &R);

        int extra_sticks = R / 30;
        int min_plates = (extra_sticks + X - 1) / Y;

        printf("%d\n", min_plates);
    }

    return 0;
}