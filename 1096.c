#include<stdio.h>


int narcissus(int n) {
    int a = n / 100;  
    int b = (n / 10) % 10;  
    int c = n % 10;  
    
    return (a * a * a + b * b * b + c * c * c == n);
}

int main() {
    int m, n;
    
    while(scanf("%d %d", &m, &n) != EOF) {
        int found = 0;  
        
        for (int i = m; i <= n; i++) {
            if (narcissus(i)) {
                if (found) {
                    printf(" ");  
                }
                printf("%d", i); 
                found = 1; 
            }
        }
        if (!found) {
            printf("no");  
        }
        printf("\n");  
    }
    return 0;
}
