#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int B1, B2, B3;
        scanf("%d %d %d", &B1, &B2, &B3);

        if ((B1 == 0 && B2 == 0) || (B1 == 0 && B3 == 0) || (B2 == 0 && B3 == 0)) {
            printf("Water filling time\n");
        } else {
            printf("Not now\n");
        }
    }

    return 0;
}