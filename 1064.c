#include <stdio.h>
#include <ctype.h>  
int main() {
    char ch;

    
    while ((ch = getchar()) != '@') {
        // 如果字符是字母
        if (isalpha(ch)) {
            // 将字符转换为小写
            ch = tolower(ch);
            // 如果是 'z'，转换为 'a'
            if (ch == 'z') {
                ch = 'a';
            }
            // 如果是 'a' 到 'y'，转换为下一个字母
            else {
                ch = ch + 1;
            }
        }
        // 输出转换后的字符
        putchar(ch);
    }
    
    printf("\n");  // 输出换行符
    return 0;
}
