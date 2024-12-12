#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);  // 读取组数

    while (t--) {
        int N;
        scanf("%d", &N);  // 读取每组数据的N

        // 打印与7有关的数字
        for (int i = 1; i <= N; i++) {
            // 判断是否为7的倍数或包含7的数字
            if (i % 7 == 0 || (i / 10 == 7) || (i % 10 == 7)) {
                printf("%d ", i);
            }
        }
        printf("\n");  // 每组输出结束后换行
    }

    return 0;
}
