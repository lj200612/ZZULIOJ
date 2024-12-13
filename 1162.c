#include <stdio.h>
#include <stdlib.h>

void ringShift(int *a, int n, int k) {
    int *temp = (int *)malloc(n * sizeof(int)); 

   
    for (int i = 0; i < k; i++) {
        temp[i] = a[n - k + i];
    }

   
    for (int i = k; i < n; i++) {
        temp[i] = a[i - k];
    }

    
    for (int i = 0; i < n; i++) {
        a[i] = temp[i];
    }

    free(temp); 
}

int main() {
    int n;
    scanf("%d", &n);

    
    int *a = (int *)malloc(n * sizeof(int));

    
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int k;
    scanf("%d", &k);

   
    k = k % n;

    
    ringShift(a, n, k);

    
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

   
    free(a);

    return 0;
}
