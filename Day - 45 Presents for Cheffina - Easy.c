#include <stdio.h>

int main() {
    int T, N;

    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        scanf("%d", &N);

        int sets_of_5 = N / 5;
        int remaining_gifts = N % 5;

        int coins_for_sets = sets_of_5 * 4;
        int coins_for_remainder = remaining_gifts;

        int total_coins = coins_for_sets + coins_for_remainder;

        printf("%d\n", total_coins);
    }

    return 0;
}