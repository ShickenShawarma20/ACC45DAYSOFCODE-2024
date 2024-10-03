#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        int X, Y;
        scanf("%d %d", &X, &Y);
        int P1 = (500 - 2*X) + (1000 - 4*(X + Y));
        int P2 = (1000 - 4*Y) + (500 - 2*(X + Y));
        printf("%d\n", P1 > P2 ? P1 : P2);
    }
    return 0;
}