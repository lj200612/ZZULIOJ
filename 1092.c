#include <stdio.h>


int prime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) { 
        if (n % i == 0) return 0; 
    }
    return 1;                     
}

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    for (int i = m; i <= n; i++) {
        if (prime(i)) {
            printf("%d ", i);     
        }
    }
    
    printf("\n");                 
    return 0;
}
