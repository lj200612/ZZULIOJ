#include <stdio.h>
#include <ctype.h>  // 包含判断字符类型的库函数

int main() {
    char input[1001];  // 定义一个字符串数组来存储输入，假设最多输入1000个字符
    int count = 0;  // 用于统计数字字符的个数

    // 读取一行输入
    fgets(input, 1001, stdin);  // 使用fgets读取包含空格的整行输入

    // 遍历输入字符串
    for (int i = 0; input[i] != '\0'; i++) {
        // 判断当前字符是否为数字字符
        if (isdigit(input[i])) {
            count++;  // 如果是数字字符，计数器加1
        }
    }

    // 输出数字字符的个数
    printf("%d\n", count);

    return 0;
}
