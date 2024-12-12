#include<stdio.h>
int main() {
    int n, number;
    scanf("%d", &n);  // 储存当前数据组数，便于后续循环。


    for (int i = 0; i < n; i++) {
        scanf("%*6d%d", &number);
        printf("6%05d", number);  // 忽略手机号前6位，读取后5位，打印出6+后5位数


        char n;
        while ((n = getchar()) != '\n' && n != EOF){
            // 定义n变量，忽略缓冲区，直到遇到换行符或者文件结束符
        }
    }
}