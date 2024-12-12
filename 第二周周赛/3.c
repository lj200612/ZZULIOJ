#include <stdio.h>

void printBinary(int n) {
    if (n == 0)
        return;

    printBinary(n / 2);
    printf("%d", n % 2);
}


int main() {
    int n;
    scanf("%d", &n);  // 输入猫咪的数量

    int b[n + 1];  // 定义数组存储每只猫咪的喵叫次数，索引从1开始
    for (int i = 1; i <= n; i++) {
        scanf("%d", &b[i]);  // 依次录入每只猫咪的喵叫次数
    }

    int c = 1;  // 初始化最吵猫咪的索引为1
    for (int i = 2; i <= n; i++) {  // 从第二只猫开始比较
        if (b[i] > b[c]) {
            c = i;  // 更新最吵猫咪的编号
        }
    }

    // 输出最吵的猫咪编号
    printf("%d\n", c);
    
    // 输出该猫咪的喵叫次数的二进制表示
    int m = b[c];  // 获取最吵猫咪的喵叫次数
    printBinary(m);
    printf("\n");
    return 0;
}