#include <stdio.h>
#include <string.h>

int main() {
    int T, N, i, smallest;
    int S[100];
    char V[100];

    scanf("%d", &T);

    while (T--) {
        scanf("%d", &N);
        for (i = 0; i < N; i++) {
            scanf("%d", &S[i]);
        }
        scanf("%s", V);

        smallest = S[0]; 
        for (i = 0; i < N; i++) {
            if (V[i] == '0' && S[i] < smallest) {
                smallest = S[i];
            }
        }

        printf("%d\n", smallest);
    }

    return 0;
}