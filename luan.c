#include <stdio.h>

void example(int n) {
    int array[n];  // n是一个运行时确定的值
    for (int i = 0; i < n; i++) {
        array[i] = i + 1;
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    example(size);
    return 0;
}