#include <stdio.h>

int find(int a[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            return i;  
        }
    }
    return -1;  
}

void del(int a[], int n, int i) {
    
    for (int j = i; j < n - 1; j++) {
        a[j] = a[j + 1];  
    }
}

void PrintArr(int a[], int n) {
    
    for (int i = 0; i < n; i++) {
        printf("%4d", a[i]);
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

    int x;
    scanf("%d", &x);  

    int index = find(a, n, x);  

    if (index == -1) {
        printf("Not Found\n");  
    } else {
        del(a, n, index);  
        PrintArr(a, n - 1);
    }

    return 0;
}
