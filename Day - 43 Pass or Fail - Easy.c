#include <stdio.h>

int main() {
    int T; 
    scanf("%d", &T); 

    while (T--) {
        int N, X, P; 
        scanf("%d %d %d", &N, &X, &P); 

        int incorrect = N - X;
        int score = (3 * X) - incorrect; 

        if (score >= P) {
            printf("PASS\n");
        } else {
            printf("FAIL\n");
        }
    }

    return 0;
}