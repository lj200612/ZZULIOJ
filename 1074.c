#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  

    int found = 0;  
 
    for (int x = 0; x <= n / 5; x++) {
        
        for (int y = 0; y <= n / 3; y++) {
            
            int z = n - x - y;

          
            if (z % 3 == 0 && 5 * x + 3 * y + z / 3 == n) {
                printf("%4d%4d%4d\n", x, y, z);  
                found = 1;  
            }
        }
    }

    if (!found) {
        printf("No Answer\n");
    }

    return 0;
}
