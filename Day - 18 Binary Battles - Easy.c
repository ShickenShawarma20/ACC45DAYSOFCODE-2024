#include <stdio.h>
#include <math.h>

void calculate_total_time(int T) {
    for (int i = 0; i < T; i++) {
        int N, A, B;
        scanf("%d %d %d", &N, &A, &B);
        
        int rounds = log2(N);
        
        int total_time = (rounds * A) + ((rounds - 1) * B);

        printf("%d\n", total_time);
    }
}

int main() {
    int T;
    scanf("%d", &T);
    
    calculate_total_time(T);
    
    return 0;
}