#include<stdio.h>


void del(int a[], int n, int i) {

    for(int j = i; j < n - 1;  j++) {
        a[j] = a[j + 1];
    }
}


void PrintArr(int a[], int n) {
    for(int i = 0; i < n; i++){
        printf("%d", a[i]);
        if (i != n - 1) {
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

    int i;
    scanf("%d", &i);


    del(a, n, i);


    PrintArr(a, n-1);


    return 0;
}