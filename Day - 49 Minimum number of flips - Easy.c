#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); 

    while (T--) {
        int N;
        scanf("%d", &N); 
        int count1 = 0, countMinus1 = 0;
        for (int i = 0; i < N; i++) {
            int x;
            scanf("%d", &x);
            if (x == 1) {
                count1++;
            } else {
                countMinus1++;
            }
        }
        int sum = count1 - countMinus1;

        if (sum % 2 != 0) {
            printf("-1\n");
        } else {
            int flips = abs(sum) / 2;
            printf("%d\n", flips);
        }
    }

    return 0;
}