#include<stdio.h>
void insert(int a[], int n, int num) {
    int i;
    for(i = 0; i < n; i++) {
        if (a[i] >= num) {
            break;
        }
    }
    for (int j = n; j > i; j--) {
                a[j] = a[j-1];
            }
    a[i] = num;
}


void PrintArr(int a[], int n) {
    for(int i = 0; i < n; i++) {
        if (i != 0) printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");
}


int main() {
    int n;
    scanf("%d", &n);

    int a[n+1];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int num;
    scanf("%d", &num);

    insert(a, n, num);

    PrintArr(a, n + 1);
    return 0;
}