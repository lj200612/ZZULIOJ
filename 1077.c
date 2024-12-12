#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // 输入整数 n

    // 打印上半部分
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            printf(" "); // 打印空格
        }
        printf("*"); // 打印左边的星号
        if (i > 0) { // 如果不是第一行
            for (int j = 0; j < 2 * i - 1; j++) {
                printf(" "); // 打印中间的空格
            }
            printf("*"); // 打印右边的星号
        }
        printf("\n"); // 换行
    }

    // 打印下半部分
    for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j < n - i - 1; j++) {
            printf(" "); // 打印空格
        }
        printf("*"); // 打印左边的星号
        if (i > 0) { // 如果不是最后一行
            for (int j = 0; j < 2 * i - 1; j++) {
                printf(" "); // 打印中间的空格
            }
            printf("*"); // 打印右边的星号
        }
        printf("\n"); // 换行
    }

    return 0;
}
