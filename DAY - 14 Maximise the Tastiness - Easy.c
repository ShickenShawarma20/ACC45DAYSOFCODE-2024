#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        
        int maxFirst = (a > b) ? a : b;
        
        int maxSecond = (c > d) ? c : d;
        
        int maxTastiness = maxFirst + maxSecond;
        
        printf("%d\n", maxTastiness);
    }
    return 0;
}