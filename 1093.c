#include<stdio.h>
int prime(int m) {
    if (m == 1) return 0;
    for (int i = 2; i * i <= m; i++) {
        if (m % i == 0) return 0;
    }
    return 1;
}
int main() {
    int m;
    scanf("%d", &m);

    for (int i = 2; i <= m / 2; i++) {
        if (prime(i) && prime(m - i)) {
            printf("%d %d\n", i, m - i);
        }
    }

    return 0;
}