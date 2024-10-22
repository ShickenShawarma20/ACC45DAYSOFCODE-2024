#include <stdio.h>

int main() {
    int t; // number of test cases
    scanf("%d", &t);

    while (t--) {
        int r1, r2, r3, r4; // decisions of the referees
        scanf("%d %d %d %d", &r1, &r2, &r3, &r4);

        // check if all referees agree that the ball is inside limits
        if (r1 == 0 && r2 == 0 && r3 == 0 && r4 == 0) {
            printf("IN\n");
        } else {
            printf("OUT\n");
        }
    }

    return 0;
}