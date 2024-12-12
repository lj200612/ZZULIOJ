#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    getchar(); // 清除输入缓冲区中的换行符

    int y[n], m[n], d[n];

    // 遍历身份证号，并逐个输出。
    for (int i = 0; i < n; i++) {
        scanf("%*6d%4d%2d%2d", &y[i], &m[i], &d[i]);
        printf("%04d-%02d-%02d\n", y[i], m[i], d[i]);

        // 清除输入缓冲区中的剩余字符
        int c;
        while ((c = getchar()) != '\n' && c != EOF) {
            // 忽略多余的字符，直到遇到换行符或文件结束符
        }
    }

    return 0;
}