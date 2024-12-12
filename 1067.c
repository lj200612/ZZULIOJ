#include <stdio.h>

int main() {
    int num, result = 0, base = 1;

    // 读取输入
    scanf("%d", &num);

    // 处理输入的每个数字
    while (num > 0) {
        int digit = num % 10;
        if (digit > 4) { // 如果当前位数字大于4，则减去1来调整
            digit -= 1;
        }
        result += digit * base;
        base *= 9;
        num /= 10;
    }

    // 输出结果
    printf("%d\n", result);

    return 0;
}