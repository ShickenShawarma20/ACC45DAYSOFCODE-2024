#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T); 

    while (T--) {
        int N;
        scanf("%d", &N); 
        char S[N + 1]; 
        scanf("%s", S); 

        char encoded[N / 2 + 1]; 
        encoded[0] = '\0'; 

        for (int i = 0; i < N; i += 2) {
            char pair[3]; 
            pair[0] = S[i];
            pair[1] = S[i + 1];
            pair[2] = '\0'; 

            if (strcmp(pair, "00") == 0) {
                strcat(encoded, "A");
            } else if (strcmp(pair, "01") == 0) {
                strcat(encoded, "T");
            } else if (strcmp(pair, "10") == 0) {
                strcat(encoded, "C");
            } else if (strcmp(pair, "11") == 0) {
                strcat(encoded, "G");
            }
        }
    }

    return 0;
}