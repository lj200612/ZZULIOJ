#include <stdio.h>

int main() {
    while (1) {
        int n;
        scanf("%d", &n);
        if (n == 0) {
            break;  // 结束输入
        }

        int negative_count = 0, zero_count = 0, positive_count = 0;
        for (int i = 0; i < n; i++) {
            double num;
            scanf("%lf", &num);  // 读取实数
            if (num < 0) {
                negative_count++;
            } else if (num == 0) {
                zero_count++;
            } else {
                positive_count++;
            }
        }

        // 输出结果
        printf("%d %d %d\n", negative_count, zero_count, positive_count);
    }

    return 0;
}
