#include <stdio.h>

#define N 10  


int IsUpperTriMatrix(int a[][N], int n) {
    for (int i = 1; i < n; i++) {  
        for (int j = 0; j < i; j++) {  
            if (a[i][j] != 0) {
                return 0;  
            }
        }
    }
    return 1;  
}

int main() {
    int n;
    scanf("%d", &n);  
    
    int a[N][N];  

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    
    if (IsUpperTriMatrix(a, n)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
