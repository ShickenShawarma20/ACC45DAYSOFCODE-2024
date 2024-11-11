#include <stdio.h>
#include <math.h>

int main() {
    int T;
    scanf("%d", &T); // Read the number of test cases

    while (T--) {
        long long N, A, B;
        scanf("%lld %lld %lld", &N, &A, &B); // Read N, A, B

        // Calculate the number of rounds
        int rounds = log2(N);

        // Calculate total time
        long long totalTime = rounds * A + (rounds - 1) * B;

        // Output the total time
        printf("%lld\n", totalTime);
    }

    return 0;
}