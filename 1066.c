#include <stdio.h>
#include <ctype.h>  // 包含判断字符类型的库函数

int main() {
    char input[101];  // 定义一个字符串数组来存储输入，假设最多输入100个字符
    int letter_count = 0;  // 统计英文字母个数
    int digit_count = 0;   // 统计数字字符个数
    int other_count = 0;   // 统计其他字符个数

    // 读取一行输入
    fgets(input, 101, stdin);  // 使用fgets读取包含空格的整行输入

    // 遍历输入字符串
    for (int i = 0; input[i] != '\0'; i++) {
        if (isalpha(input[i])) {
            letter_count++;  // 如果是英文字母，计数加1
        } else if (isdigit(input[i])) {
            digit_count++;   // 如果是数字字符，计数加1
        } else if (input[i] != '\n') {  // 排除换行符，统计其他字符
            other_count++;
        }
    }

    // 输出结果
    printf("letter:%d\n", letter_count);
    printf("digit:%d\n", digit_count);
    printf("other:%d\n", other_count);

    return 0;
}
