#include <stdio.h>

struct ch {
    char c[100000];  // 假设每个字符串的最大长度为 100000
};

int main() {
    int n;
    scanf("%d", &n);  // 读取字符串的个数
    struct ch ch[n];

    int l, k;
    scanf("%d %d", &l, &k);  // 读取每个字符串的长度 l 和偏移量 k

    // 处理每个字符串
    for (int i = 0; i < n; i++) {
        // 读取每个字符并进行凯撒加密
        for (int j = 0; j < l; j++) {
            scanf(" %c", &ch[i].c[j]);  // 注意前面的空格来丢弃多余的换行符或空格
            // 如果是字母，则进行凯撒加密
            if (ch[i].c[j] >= 'a' && ch[i].c[j] <= 'z') {
                ch[i].c[j] = 'a' + (ch[i].c[j] - 'a' + k) % 26;
            } else if (ch[i].c[j] >= 'A' && ch[i].c[j] <= 'Z') {
                ch[i].c[j] = 'A' + (ch[i].c[j] - 'A' + k) % 26;
            }
            // 空格不做任何改变
        }
        ch[i].c[l] = '\0';  // 终止符，确保字符串正确结束
    }

    // 输出所有加密后的字符串
    for (int i = 0; i < n; i++) {
        printf("%s\n", ch[i].c);  // 输出加密后的字符串
    }

    return 0;
}
