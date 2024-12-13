#include<stdio.h>

int main() {
    int m, n, p;
    scanf("%d %d %d", &m, &p, &n);


    int a[m][p];
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < p; j++) {
            scanf("%d", &a[i][j]);
        }
    }


    int b[p][n];
    for(int i = 0; i < p; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    int c[m][n];
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            c[i][j] = 0;
            for (int k = 0; k < p; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}