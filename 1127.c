#include <stdio.h>

int main() {
    int m, p, n;
    scanf("%d %d %d", &m, &p, &n);  

    int A[m][p], B[p][n], C[m][n];  

    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = 0;  
            for (int k = 0; k < p; k++) {
                C[i][j] += A[i][k] * B[k][j]; 
            }
        }
    }

    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
