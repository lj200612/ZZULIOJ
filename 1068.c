#include <stdio.h>
#include <string.h>

int main() {
    char binary[32];  // 定义一个最大长度为31的字符串存储二进制数（再加1个用于字符串结束符）
    scanf("%s", binary);  // 读取输入的二进制字符串

    int decimal = 0;  // 用于存储最终的十进制数
    int length = strlen(binary);  // 获取输入二进制字符串的长度

    // 遍历字符串的每一个字符
    for (int i = 0; i < length; i++) {
        // 将字符从二进制转换为十进制
        decimal = decimal * 2 + (binary[i] - '0');
    }

    printf("%d\n", decimal);  // 输出最终转换得到的十进制数
    return 0;
}
