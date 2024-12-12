#include <stdio.h>

void primeFactors(int n) {
    // 打印2的所有因子
    while (n % 2 == 0) {
        printf("2 ");
        n = n / 2;
    }

    // n必须是奇数
    for (int i = 3; i * i <= n; i = i + 2) {
        // 当i为n的因子时
        while (n % i == 0) {
            printf("%d ", i);
            n = n / i;
        }
    }

    // 如果n是质数且大于2
    if (n > 2) {
        printf("%d ", n);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    // 调用函数并打印质因数
    primeFactors(n);

    return 0;
}