#include <stdio.h>

int main() {
    char chars[3];

    while (scanf("%s", chars) != EOF) {
        // 对三个字符进行排序
        for (int i = 0; i < 2; i++) {
            for (int j = i + 1; j < 3; j++) {
                if (chars[i] > chars[j]) {
                    // 交换
                    char temp = chars[i];
                    chars[i] = chars[j];
                    chars[j] = temp;
                }
            }
        }

        // 输出排序后的字符
        printf("%c %c %c\n", chars[0], chars[1], chars[2]);
    }

    return 0;
}
