#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); 
    
    while (T--) {
        int S, X, Y, Z;
        scanf("%d %d %d %d", &S, &X, &Y, &Z); 
     
        int available_memory = S - (X + Y);
        
        if (available_memory >= Z) {
            printf("0\n");
        } else {
           
            int needed_memory = Z - available_memory;
            
            if (needed_memory <= X || needed_memory <= Y) {
                printf("1\n");
            } else {
                printf("2\n");
            }
        }
    }
    
    return 0;
}