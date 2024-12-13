#include <stdio.h>


void sort(int a[], int n){
    for(int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
                
            }
        }
    }
}


void PrintArr(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d", a[i]);
        if (i < n - 1) {
            printf(" ");  
        }
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);  
    int a[n];
    
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    
    sort(a, n);

    
    PrintArr(a, n);

    return 0;
}
